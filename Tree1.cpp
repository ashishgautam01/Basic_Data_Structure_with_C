// Tree implementation
//This is a Binary tree

#include<iostream>
using namespace std;

struct tree{
	tree *left, *right;
	int data;
	tree(int data){
		this->data = data;
		left = right = NULL;
	}
};

void inorder(tree *node){
		if(node == NULL)
			return;
		
		inorder(node->left);
		cout<<node->data<<" ";
		inorder(node->right);
}	

void preorder(tree *node){
	if(node == NULL){
		return ;
	}
	cout<<node->data<<" ";
	preorder(node->left);
	preorder(node->right);
}

void postorder(tree *node){
	if(node == NULL)
		return;

	postorder(node->left);
	postorder(node->right);
	cout<<node->data<<" ";
}
int main(){
	tree *t = new tree(1);
	t->left = new tree(2);
	t->right = new tree(3);
	cout<<"\nIn-order (L,Rt,R)  : ";
	inorder(t);
	cout<<"\nPre-order (Rt,L,R) : ";
	preorder(t);
	cout<<"\nPostorder (L,R,Rt) : ";
	postorder(t);
	return 0;
}