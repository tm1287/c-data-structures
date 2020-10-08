#include "tree.h"
#include <stdio.h>

TreeNode* initTree(TreeNode* root, int val){
  if(root == NULL){
    root = (TreeNode*) malloc(sizeof(TreeNode));
    root->leftChild = NULL;
    root->rightChild = NULL;
    root->value = val;
  }
  return root;
}

void createLeftChild(TreeNode* parent, int val){
  if(parent != NULL && parent->leftChild == NULL){
    TreeNode* leftChild = (TreeNode*) malloc(sizeof(TreeNode));
    leftChild->leftChild = NULL;
    leftChild->rightChild = NULL;
    leftChild->value = val;

    parent->leftChild = leftChild;
  }
}

void createRightChild(TreeNode* parent, int val){
  if(parent != NULL && parent->rightChild == NULL){
    TreeNode* rightChild = (TreeNode*) malloc(sizeof(TreeNode));
    rightChild->leftChild = NULL;
    rightChild->rightChild = NULL;
    rightChild->value = val;

    parent->rightChild = rightChild;
  }
}

TreeNode* search(TreeNode* node, int key){
  if (node == NULL){
    return NULL;
  } else if(node->value == key){
    return node;
  }

  TreeNode* leftFound = search(node->leftChild, key);
  if(leftFound != NULL){
    return leftFound;
  }

  TreeNode* rightFound = search(node->rightChild, key);

  return rightFound;
}

void traverse(TreeNode* node, int depth){
  if(node != NULL){
    printf("%d Depth: %d\n",node->value, depth);
    depth++;
    traverse(node->leftChild, depth);
    traverse(node->rightChild, depth);
    depth--;
  } else {
    printf("NULL   : %d\n", depth);
  }

}
