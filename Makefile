CC=clang
CFLAGS=-I. -g

all: test

clean:
	rm -f test *.o

test: test.c node.c
	$(CC) -o test test.c node.c $(CFLAGS)
