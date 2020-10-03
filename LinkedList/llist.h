#ifndef __LLIST_H
#define __LLIST_H

#include <stdlib.h>

typedef struct LLNode {
  struct LLNode* next;
  int value;
} LLNode;

LLNode* initList(LLNode* head, int val);
LLNode* clearList(LLNode* head);
LLNode* insertFront(LLNode* head, int val);
LLNode* insertBack(LLNode* head, int val);
LLNode* insertAfter(LLNode* head, int key, int val);
LLNode* removeItem(LLNode* head, int key);
void printForwards(LLNode* head);

#endif
