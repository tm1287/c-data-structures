#include "stack.h"
#include <stdio.h>
#include <string.h>

int main() {
  Stack* stack = NULL;

  char commands[16];
  while(scanf("%s", commands) == 1){
    if(strcmp(commands, "push") == 0){
      int val;
      scanf("%d", &val);
      push(stack, val);
    } else if (strcmp(commands, "pop") == 0) {
      printf("%d\n", pop(stack));
    } else if (strcmp(commands, "peek") == 0) {
      printf("Stack: %d\n", peek(stack));
    } else if (strcmp(commands, "init") == 0) {
      int size;
      scanf("%d", &size);
      stack = initStack(stack, size);
    } else if (strcmp(commands, "clear") == 0) {
      stack = clearStack(stack);
    }
  }
  stack = clearStack(stack);
  return 0;
}
