#ifndef __LLIST_H
#define __LLIST_H

#include <stdlib.h>

typedef struct LLNode {
  struct LLNode* next;
  int value;
} LLNode;

void initList(LLNode* head);
void clearList(LLNode* head);
void insertFront(LLNode* head, int value);
void insertBack(LLNode* head, int value);
void insertAfter(LLNode* head, int key, int value);
void removeItem(LLNode* head, int key);
void printForwards(LLNode* head);
void printBackwards(LLNode* head);

#endif
