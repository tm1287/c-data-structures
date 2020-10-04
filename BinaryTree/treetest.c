#include "tree.h"
#include <stdio.h>

int main() {
  TreeNode* root = NULL;
  root = initTree(root, 1);
  printf("%p %p\n", root->leftChild, root->rightChild);
  createLeftChild(root, 2);
  printf("%p %p\n", root->leftChild, root->rightChild);
  createRightChild(root, 3);
  printf("%p %p\n", root->leftChild, root->rightChild);
  printf("%d %d\n", root->leftChild->value, root->rightChild->value);
  TreeNode* found = search(root, 3);
  printf("%p %d\n", found, found->value);


}
