#include <stdio.h>
#include <stdlib.h>
#include "fields.h"

int
main(int argc, char ** argv)
{
  IS is;
  int i;

  printf("hello world\n");

  is = new_inputstruct(argv[1]);
  if (is == NULL) {
    perror("input");
    exit(1);
  }

  while(get_line(is) >= 0) {
    for (i = 0; i < is->NF; i++) {
      printf("%d: %s\n", is->line, is->fields[i]);
    }
  }

  jettison_inputstruct(is);

  return 0;
}
