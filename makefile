INC = libfdr/include
LIB = libfdr/lib

CC = gcc

hello.o: hello.c
	$(CC) -c hello.c -I$(INC)

hello: hello.o
	$(CC) -o hello hello.o -L$(LIB) -lfdr

all: hello

clean: 
	rm *.o  hello
