#include <stdio.h>
#include <stdlib.h>

#include "soccer.h"

stats 
create_record(int year, int day, int type, char * label)
{

  stats s;

  s = malloc(sizeof(struct sta));

  s->year = year;
  s->day  = day;
  s->type = type;
  s->label = label;

  return s;
}
