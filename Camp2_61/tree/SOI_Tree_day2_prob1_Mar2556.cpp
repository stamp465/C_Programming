#include<bits/stdc++.h>
using namespace std;
class TreeNode{
public :
	int key;
	int countt;
	TreeNode* parent;
	TreeNode* right;
	TreeNode* left;
	TreeNode(int key){
		this->key = key;
		parent = right = left = NULL;
		countt = 1;
	};
};
TreeNode* insert(int key,TreeNode*& current,TreeNode* parent){
	if(current==NULL){
		current = new TreeNode(key);
		current->parent = parent;
		return NULL;
	}
	else if(current->key < key){
		return insert(key,current->right,current);
	}
	else if(current->key > key){
		return insert(key,current->left,current);
	}
	else{
        current->countt++;
		return NULL;
	}
}
TreeNode* findMax(TreeNode* current){
	if(current==NULL){
		return NULL;
	}
	else if(current->right!=NULL){
		return findMax(current->right);
	}
	else{
		return current;
	}
}
void remove(int key,TreeNode*& current){
	if(current==NULL){
		return ;
	}
	else if(current->key < key){
		return remove(key,current->right);
	}
	else if(current->key > key){
		return remove(key,current->left);
	}
	else if(current->key == key&&current->countt>1){
        current->countt--;
	}
	else if(current->right!=NULL&&current->left!=NULL){
		TreeNode* replace = findMax(current->left);
		current->key = replace->key;
		remove(replace->key,current->left);
	}
	else{
		TreeNode* temp = current;
		if(current->left!=NULL){
			current = current->left;
		}
		else current = current->right;
		delete temp;
	}
}
TreeNode* findN(int key,TreeNode* current){
	if(current==NULL){
		return NULL;
	}
	TreeNode* curr = current;
	while(curr!=NULL){
		if(curr->key == key){
			return curr;
		}
		else if(curr->key < key){
			curr = curr->right;
		}
		else if(curr->key > key){
			curr = curr->left;
		}
	}
}
TreeNode* inorder(TreeNode* current){
	if(current==NULL){
		return NULL;
	}
	else{
		inorder(current->left);
		printf("%d(%d) ",current->key,current->countt);
		inorder(current->right);
	}
}
TreeNode* preorder(TreeNode* current){
	if(current==NULL){
		return NULL;
	}
	else{
		printf("%d(%d) ",current->key,current->countt);
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
		printf("%d(%d) ",current->key,current->countt);
	}
}

int main()
{
    char a[256];
    int num;
    TreeNode* root = NULL;
    while( a[0] != 'X')
    {
        scanf("%s %d", a, &num);
        char dummy[256];
        if (a[0] == 'I')
        {
            insert(num, root, NULL);
        }
        else if (a[0] == 'F')
        {
            TreeNode* node = findN(num, root);
            if (node == NULL)
                printf("\nN");
            else{
                printf("\nY %d",node->countt);
            }
        }
        else if (a[0] == 'R')
        {
            remove(num, root);
        }
        else if (a[0] == 'P')
        {
            sscanf(a, "%s %d", dummy, &num);
            if (num == 1)
            {
                cout << "\n";
                inorder(root);
            }
            else if (num == 2)
            {
                cout << "\n";
                preorder(root);
            }
            else if (num == 3)
            {
                cout << "\n";
                postorder(root);
            }
        }
    }
    return 0;
}

