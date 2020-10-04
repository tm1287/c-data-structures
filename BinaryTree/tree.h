#ifndef __TREE_H
#define __TREE_H

#include <stdlib.h>

typedef struct TreeNode {
  struct TreeNode* leftChild;
  struct TreeNode* rightChild;
  int value;
} TreeNode;

TreeNode* initTree(TreeNode* root, int val);
void createLeftChild(TreeNode* parent, int val);
void createRightChild(TreeNode* parent, int val);
TreeNode* search(TreeNode* node, int key);

#endif
