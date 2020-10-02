CC=cc
CFLAGS=-g

all: lltest

dltest: llist.o lltest.o
        $(CC) $(CLFAGS) -o $@  $^

%.o : %.c llist.h
        $(CC) $(CFLAGS) -c $<

clean:
        rm -rf *.o lltest
