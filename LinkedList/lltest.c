#include "llist.h"
#include <stdio.h>
#include <string.h>

int main(){
  printf("%s\n", "Running the program now...");
  LLNode* headNode = NULL;

  char commands[16];
  while(scanf("%s", commands) == 1){
    if(strncmp(commands, "if", 2) == 0){
      int val;
      scanf("%d", &val);
      headNode = insertFront(headNode, val);
    } else if(strncmp(commands, "ib", 2) == 0){
      int val;
      scanf("%d", &val);
      headNode = insertBack(headNode, val);
    } else if(strncmp(commands, "ia", 2) == 0){
      int val;
      int key;
      scanf("%d %d", &key, &val);
      headNode = insertAfter(headNode, key, val);
    } else if(strncmp(commands, "rm", 2) == 0){
      int key;
      scanf("%d", &key);
      headNode = removeItem(headNode, key);
    } else if(strncmp(commands, "in", 2) == 0){
      int val;
      scanf("%d", &val);
      headNode = initList(headNode, val);
    } else if(strncmp(commands, "cl", 2) == 0){
      headNode = clearList(headNode);
    } else if(strncmp(commands, "rv", 2) == 0){
      headNode = reverseList(headNode);
    } else if(strncmp(commands, "pf", 2) == 0){
      printForwards(headNode);
    } else if(strncmp(commands, "exit", 4) == 0){
      return 0;
    }else {
      printf("Invalid Command\n");
    }
  }
  headNode = clearList(headNode);
  return 0;
}
