INC = libfdr/include
LIB = libfdr/lib

CC = gcc

hello.o: hello.c soccer.c soccer.h
	$(CC) -c hello.c -I$(INC)

soccer.o: soccer.c soccer.h
	$(CC) -c soccer.c -I$(INC)

hello: hello.o soccer.o
	$(CC) -o hello hello.o soccer.o -L$(LIB) -lfdr

all: hello

clean: 
	rm *.o  hello
