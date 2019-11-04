#include<bits/stdc++.h>
using namespace std;
class TreeNode{
public :
    int key;
    string name;
    TreeNode* parent;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int key,string name){
        this->key = key;
        this->name = name;
        parent = left = right = NULL;
    };
};
TreeNode* insert(int key,TreeNode*& current,TreeNode* parent,string name){
    if(current==NULL){
        //cout << "insert" << key << name << endl;
        current = new TreeNode(key,name);
        current->parent = parent;
        return NULL;
    }
    else if(current->key < key){
        return insert(key,current->right,current,name);
    }
    else if(current->key > key){
        return insert(key,current->left,current,name);
    }
    else {
        return NULL;
    }
}
TreeNode* findN(int key,TreeNode* current){
    if(current == NULL){
        return NULL;
    }
    else{
        while(current!=NULL){
            if(current->key == key){
                return current;
            }
            if(current->key < key){
                current = current->right;
            }
            if(current->key > key){
                current = current->left;
            }
        }
        return NULL;
    }
}
TreeNode* findMaxN(TreeNode* current){
    if(current==NULL){
        return NULL;
    }
    else{
        while(1){
            if(current->right!=NULL){
                current = current->right;
            }
            if(current->right==NULL){
                return current;
            }
        }
        return NULL;
    }
}
TreeNode* remove(int key,TreeNode*& current){
    if(current==NULL){
        return NULL;
    }
    else if(current->key < key){
        return remove(key,current->right);
    }
    else if(current->key > key){
        return remove(key,current->left);
    }
    else if(current->left!=NULL&&current->right!=NULL){
        TreeNode* replace = findMaxN(current->left);
        current->key = replace->key;
        remove(replace->key,current->left);
    }
    else{
        TreeNode* temp = current;
        if(current->left!=NULL){
            current = current->left;
        }
        else{
            current = current->right;
        }
        delete temp;
    }
}
TreeNode* inorder(TreeNode* current){
    if(current==NULL){
        return NULL;
    }
    else{
        inorder(current->left);
        printf("%d:%s ",current->key,current->name.c_str());
        inorder(current->right);
    }
}
TreeNode* preorder(TreeNode* current){
    if(current==NULL){
        return NULL;
    }
    else{
        printf("%d:%s ",current->key,current->name.c_str());
        preorder(current->left);
        preorder(current->right);
    }
}
TreeNode* postorder(TreeNode* current){
    if(current==NULL){
        return NULL;
    }
    else{
        postorder(current->left);
        postorder(current->right);
        printf("%d:%s ",current->key,current->name.c_str());
    }
}
int main(){
    TreeNode* root = NULL;
    while(1){
        char Oper[300];
        int key;
        scanf("%s %d",Oper,&key);
        if(Oper[0]=='X'){
            break;
        }
        if(Oper[0]=='I'){
            string name;
            cin >> name;
            insert(key,root,NULL,name);
        }
        if(Oper[0]=='F'){
            TreeNode* current = findN(key,root);
            if(current==NULL){
                printf("N\n");
            }
            else{
                printf("%s\n",current->name.c_str());
            }
        }
        if(Oper[0]=='R'){
            remove(key,root);
        }
        if(Oper[0]=='P'){
            if(key==1){

                inorder(root);cout << endl;
            }
            if(key==2){

                preorder(root);cout << endl;
            }
            if(key==3){

                postorder(root);cout << endl;
            }
        }
    }
}
