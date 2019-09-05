#include <stdio.h>
#include <stdlib.h>
#include "fields.h"
#include "soccer.h"

int
main(int argc, char ** argv)
{
  IS is;
  int i;
  stats s[100];

  printf("hello world\n");

  is = new_inputstruct(argv[1]);
  if (is == NULL) {
    perror("input");
    exit(1);
  }

  while(get_line(is) >= 0) {
    for (i = 0; i < is->NF; i++) {
      /*printf("%d: %s\n", is->line, is->fields[i]);
      */

      s[is->line] = create_record(2019, 30, 1, is->fields[is->NF-1]);
      printf("%d: %s\n", is->line, s[is->line]->label);
    }
  }

  for (i = 0; i < 100; i ++)
    printf("%d: %s\n", i, s[i]->label);

  jettison_inputstruct(is);

  return 0;
}
