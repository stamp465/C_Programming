#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
class TreeNode{
public:
  int key;
  int count;
  TreeNode *left,*right,*parent;
  TreeNode(int key){
    this->key = key;
    count = 1;
    left = NULL; right= NULL; parent = NULL;
  };
};
TreeNode* insertN(int key,TreeNode* root);
TreeNode* insertR(int key, TreeNode*& start,TreeNode* parent);
TreeNode* removeR(int key, TreeNode* start);
TreeNode* find(int key, TreeNode* root);
TreeNode* findMin(TreeNode* root);
TreeNode* findMaxN(TreeNode* root);
TreeNode* findMaxR(TreeNode* start);

TreeNode* insertR(int key, TreeNode*& curr, TreeNode* parent){
    if (curr == NULL) {
        curr = new TreeNode(key);
        curr->parent = parent;
        return curr;
    }
    else if (key < curr->key) {
        return insertR(key, curr->left, curr);
    } else if (key > curr->key) {
        return insertR(key, curr->right, curr);
    } else {
        curr->count += 1;
        return NULL;    // Do nothing
    }
}
void removeR(int key, TreeNode*& current){
    if (current == NULL)
        return;     // No match node, do nothing
    else if (key < current->key)
        return removeR(key, current->left);
    else if (key > current->key)
        return removeR(key, current->right);
    else if (current->left != NULL && current->right != NULL) {
        TreeNode* replacer = findMax(current->left);
        current->key = replacer->key;
        removeR(replacer->key, current->left);
    } else {
        TreeNode* temp = current;
        if (current->left != NULL)
            current = current->left;
        else
            current = current->right;

        delete temp;
    }
}

TreeNode* findMaxR(TreeNode* current) {
    if (current == NULL)
        return NULL;
    else if (current->right == NULL)
        return current;
    else
        return findMaxR(current->right);
}
void inorder(TreeNode* curr){
  if (curr != NULL){
    inorder(curr->left);
    printf("%d(%d) ",curr->key,curr->count);
    inorder(curr->right);
  }
}
int main(){
  TreeNode* root = NULL;
  insertR(6,root,NULL);
  insertR(7,root,NULL);
  insertR(5,root,NULL);
  insertR(2,root,NULL);
  insertR(4,root,NULL);
  insertR(3,root,NULL);
  insertR(1,root,NULL);
  insertR(8,root,NULL);
  inorder(root);printf("\n")
  removeR(2,root);
  inorder(root);printf("\n")
  TreeNode* maxvalue = findMaxR(root);
  printf("\n%d\n",maxvalue->key);
  return 0;
}
