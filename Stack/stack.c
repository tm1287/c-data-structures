#include "stack.h"
#include <stdio.h>

Stack* initStack(Stack* stack, unsigned capacity) {
  if(stack == NULL){
    stack = (Stack*) malloc(sizeof(Stack));
    stack->size = capacity;
    stack->topIndex = -1;
    stack->items = (int*) malloc(stack->size * sizeof(int));
  }
  return stack;
}

int isEmpty(Stack* stack){
  if(stack != NULL){
    return stack->topIndex == -1;
  } else {
    return -1;
  }
}

int isFull(Stack* stack){
  if(stack != NULL){
    return stack->topIndex+1 == (int) stack->size;
  } else {
    printf("Stack is full\n");
    return -1;
  }
}

void push(Stack* stack, int item){
  if(stack != NULL){
    if(!isFull(stack)){
      stack->topIndex++;
      stack->items[stack->topIndex] = item;
    }
  }
}

int pop(Stack* stack){
  int poppedVal = -1;
  if(stack != NULL){
    if(!isEmpty(stack)){
      poppedVal = stack->items[stack->topIndex];
      stack->topIndex--;
    }
  }
  return poppedVal;
}

int peek(Stack* stack){
  if(stack != NULL){
    if(stack->topIndex != -1){
      return stack->items[stack->topIndex];
    } else {
      return -1;
    }
  } else {
    return -1;
  }
}

Stack* clearStack(Stack* stack){
  free(stack);
  return NULL;
}
