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
void push(Stack* stack, int item);
int pop(Stack* stack);
int peek(Stack* stack);
Stack* clearStack(Stack* stack);
#endif
