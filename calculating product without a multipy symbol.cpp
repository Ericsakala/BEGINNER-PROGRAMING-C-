#include <iostream>
using namespace std;
struct node{
int value;
node* right;
node* left;	

};
void print (int value,node*n, node* right, node* left){
	if(n!=NULL){
		cout<<n->right;
	}
}

int main(){
	this->value=value;
this->right=right;
this->left=left;
	
	node* root =new node();
	
	root->left=new node(4);
	root->right=new node(7);
	root->right->right=new node(5);
	root->right->left=new node(10);
	root->left->right=new node(12);
	root->left->left=new node(13)
	root->left->right=NULL;
	

	
	return 0;
}