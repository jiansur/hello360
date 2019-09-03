#ifndef ___SOCCER_H_
#define ___SOCCER_H_

typedef struct sta {

  int year;
  int day;
  int type;
  char * label;

} * stats;

stats create_record(int year, int day, int type, char * label);

void copy_record(stats src, stats dst);

void free_record(stats s);



#endif
