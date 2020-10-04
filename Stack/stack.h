#ifndef __STACK_H
#define __STACK_H

#include <stdlib.h>

typedef struct Stack {
  int topIndex;
  unsigned size;
  int* items;
} Stack;

int isEmpty(Stack* stack);
int isFull(Stack* stack);
Stack* initStack(Stack* stack, unsigned capacity);
Stack* push(Stack* stack, int item);
Stack* pop(Stack* stack);
int peek(Stack* stack);
#endif
