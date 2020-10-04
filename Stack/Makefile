CC=cc
CFLAGS=-g

all: stack

stack: stack.o stacktest.o
	$(CC) $(CLFAGS) -o $@  $^

%.o : %.c stack.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -rf *.o stack
