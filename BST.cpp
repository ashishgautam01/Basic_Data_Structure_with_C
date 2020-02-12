#include<iostream>
using namespace std;

struct Node{
	int info;
	Node *left, *right, *par ;
	Node(int data){
		this->info = data;
		left = right = NULL;
		par = this;
	}
};

void insert(Node *tree, Node *newnode)
{
    if (tree->info == newnode->info)
    {
        cout<<"Element already in the tree"<<endl;
        return;
    }
    if (tree->info > newnode->info)
    {
        if (tree->left != NULL)
        {
            insert(tree->left, newnode);	
		}
		else
		{
            tree->left = newnode;
            (tree->left)->left = NULL;
            (tree->left)->right = NULL;
            cout<<"Node Added To Left"<<endl;
            return;
        }
    }
    else
    {
        if (tree->right != NULL)
        {
            insert(tree->right, newnode);
        }
        else
        {
            tree->right = newnode;
            (tree->right)->left = NULL;
            (tree->right)->right = NULL;
            cout<<"Node Added To Right"<<endl;
            return;
        }	
    }
}

void show(Node *root){// for printing out
	if(root == NULL)
		return;
	show(root->left);
	cout<<root->info<<" ";
	show(root->right);
}


int main(){
	Node *t = new Node(5);
	Node *t1 = new Node(2);
	Node *t2 = new Node(7);
	Node *t3 = new Node(34);
	Node *t4 = new Node(1);

	insert(t,t1);
	insert(t,t2);
	insert(t,t3);
	show(t);
	insert(t,t4);
	show(t);
}