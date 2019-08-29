CC = gcc
INC = ../include
OBJS = fields.o dllist.o jrb.o jval.o socketfun.o wd.o

fields.o: fields.c  $(INC)/fields.h
	$(CC) -c fields.c -I$(INC)

%.o:%.c $(INC)/%.h
	$(CC) -c $< -I$(INC) -o $@

libfdr.a: $(OBJS)
	ar rcs libfdr.a $(OBJS)

clean:
	rm *.o libfdr.a

install: libfdr.a
	mv $< ../lib/
