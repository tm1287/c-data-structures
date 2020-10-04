#include "stack.h"
#include <stdio.h>

Stack* initStack(Stack* stack, unsigned capacity) {
  stack = (Stack*) malloc(sizeof(Stack));
  stack->size = capacity;
  stack->topIndex = -1;
  stack->items = (int*) malloc(stack->size * sizeof(int));
  printf("%u %d %d\n", stack->size, stack->topIndex, *stack->items);
  return stack;
}

int isEmpty(Stack* stack){
  return stack->topIndex == -1;
}

int isFull(Stack* stack){
  return stack->topIndex+1 == (int) stack->size;
}

Stack* push(Stack* stack, int item){
  if(!isFull(stack)){
    stack->topIndex++;
    stack->items[stack->topIndex] = item;
  }
  return stack;
}

Stack* pop(Stack* stack){
  if(!isEmpty(stack)){
    stack->topIndex--;
    stack->items[stack->topIndex];
  }
  return stack;
}

int peek(Stack* stack){
  return stack->items[stack->topIndex];
}
