#include "tree.h"
#include <stdio.h>

int main() {
  TreeNode* root = NULL;
  root = initTree(root, 1);
  createLeftChild(root, 2);
  createRightChild(root, 3);

  createLeftChild(root->leftChild, 4);
  createRightChild(root->leftChild, 5);

  createLeftChild(root->rightChild, 6);
  printf("%p\n", root->rightChild->leftChild);
  createRightChild(root->rightChild, 7);
  createRightChild(root->rightChild->rightChild, 8);
  createRightChild(root->rightChild->rightChild->rightChild, 9);


  TreeNode* found = search(root, 6);
  printf("%p %d\n", found, found->value);

  traverse(root, 0);



}
