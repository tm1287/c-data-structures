#include "stack.h"
#include <stdio.h>
#include <string.h>

int main() {
  Stack* stack = NULL;

  stack = initStack(stack, 5);
  stack = push(stack, 1);
  stack = push(stack, 2);
  printf("Top of Stack is %d\n", peek(stack));
  stack = pop(stack);
  printf("Top of Stack is now %d\n", peek(stack));
}
