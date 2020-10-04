#include "llist.h"
#include <stdio.h>
#include <string.h>

int main(){
  printf("%s\n", "Running the program now...");
  LLNode* headNode = NULL;

  headNode = initList(headNode, 1);  // if headNode is not null, set the value to val or allocate it first
  headNode = insertFront(headNode, 0);
  headNode = insertBack(headNode, 2);
  headNode = insertAfter(headNode, 2, 9);
  printForwards(headNode);
  printf("-----------------\n");
  headNode = removeItem(headNode, 2);
  printForwards(headNode);

  return 0;
}
