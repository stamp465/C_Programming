#include <iostream>
#include <cstdio>
using namespace std;
class TreeNode {
  public:
    int key;
    int leftside;
    int rightside;
    TreeNode* parent;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int key,int leftside,int rightside) {
        this->key = key;
        this->leftside = leftside;
        this->rightside = rightside;
        parent = left = right = NULL;
    };
};
TreeNode* insert(int key, TreeNode*& current, TreeNode* parent) {
    if (current == NULL) {
        current = new TreeNode(key,0,0);
        current->parent = parent;
        return current;
    } else if (key < current->key) {
        current->leftside++;
        return insert(key, current->left, current);
    } else if (key > current->key) {
        current->rightside++;
        return insert(key, current->right, current);
    } else {
        return NULL; // Do nothing
    }
}

TreeNode* findN(int key, TreeNode* root,int *number,int checkgo) {
    if (root == NULL)
        return NULL;
    TreeNode* curr = root;
    while(curr != NULL) {
        if(checkgo==1){
            *number = *number -1 -curr->rightside;
        }
        if(checkgo==2){
            *number = *number +1 +curr->leftside;
        }
        //printf("%d....%d\n",curr->key,*number);
        if (curr->key == key){
            return curr;
        }
        else if (key < curr->key){
            //printf("go left %d....%d\n",curr->key,*number);
            checkgo = 1;
            curr = curr->left;
        }
        else if (key > curr->key){
            //printf("go right %d....%d\n",curr->key,*number);
            checkgo = 2;
            curr = curr->right;
        }
    }
    return NULL; // No match
}

void inorder(TreeNode* current) {
    if (current == NULL)
        return;
    else {
        inorder(current->left);
        cout << current->key << " " << current->leftside << " " << current->rightside << endl;
        inorder(current->right);
    }
}

int main() {
    TreeNode* root = NULL;
    int N,key,countt=0,first,savenum;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        int b;
        scanf("%d %d",&b,&key);
        if(b==1){
            if(i==0){
                first = key;
                savenum = 1;
            }
            else{
                if(key<first){
                    savenum++;
                }
            }
            insert(key, root, NULL);
            countt++;
            //inorder(root);
        }
        if(b==2){
            int num = savenum;
            TreeNode* node = findN(key, root,&num,0);
            printf("%d\n",num);

        }
    }
    return 0;
}

