#include "llist.h"
#include <stdio.h>

/**
* Initialize the head node of the list with a value
**/
LLNode* initList(LLNode* head, int val){
  // Avoid memory leaks by only inilizing on null nodes.
  if (head == NULL){
    head = (LLNode*) malloc(sizeof(LLNode));
    head->value = val;
    head->next = NULL;
    printf("Initialized: %p -> %p\n", head, head->next);
  }

  return head;
}

LLNode* insertFront(LLNode* head, int val){
  if (head != NULL){
    LLNode* newNode = (LLNode*) malloc(sizeof(LLNode));
    newNode->next = head;
    newNode->value = val;
    head = newNode;
    printf("Inserted: %p -> %p\n", head, head->next);

    return head;
  } else {
    initList(head, val);
  }
}

LLNode* insertBack(LLNode* head, int val){
  if(head != NULL){
    LLNode* newNode = (LLNode*) malloc(sizeof(LLNode));
    newNode->value = val;
    newNode->next = NULL;

    LLNode* currentNode = head;
    do {
      currentNode = currentNode->next;
    } while(currentNode->next != 0);

    currentNode->next = newNode;

    return head;
  } else {
    initList(head, val);
  }
}

LLNode* insertAfter(LLNode* head, int key, int val){
  if(head != NULL){
    LLNode* newNode = (LLNode*) malloc(sizeof(LLNode));
    newNode->value = val;

    LLNode* currentNode = head;
    while(currentNode->value != key && currentNode->next != 0){
      currentNode = currentNode->next;
    }

    newNode->next = currentNode->next;
    currentNode->next = newNode;

    return head;
  } else {
    initList(head, val);
  }
}

LLNode* removeItem(LLNode* head, int key){
  if(head != NULL){
    LLNode* currentNode = head;
    LLNode* lastCurrentNode = head;

    while(currentNode != 0){
      if(currentNode->value == key){
        lastCurrentNode->next = currentNode->next;
        if(currentNode == lastCurrentNode){
          head = currentNode->next;
        }
        free(currentNode);
        break;
      } else {
        lastCurrentNode = currentNode;
        currentNode = currentNode->next;
      }
    }
  }

  return head;
}

LLNode* clearList(LLNode* head){
  LLNode* prevCurrentNode = head;
  LLNode* currentNode = head;
  while(currentNode != 0) {
    prevCurrentNode=currentNode;
    currentNode=currentNode->next;
    free(prevCurrentNode);
  }
  head = NULL;
  printf("List has been cleared.\n");
  return head;
}

void printForwards(LLNode* head){
  if(head != NULL){
    LLNode* currentNode = head;
    int counter = 0;
    do {
      printf("Node %d: %p Value: %d\n", counter, currentNode, currentNode->value);
      currentNode = currentNode->next;
      counter++;
    } while(currentNode != 0);
  } else {
    printf("%s\n", "The list does not exist, must be initialized.");
  }
}
