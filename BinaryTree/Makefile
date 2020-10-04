CC=cc
CFLAGS=-g

all: treetest

treetest: tree.o treetest.o
	$(CC) $(CLFAGS) -o $@  $^

%.o : %.c tree.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -rf *.o treetest
