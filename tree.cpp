//Tree creation and pre-order traversal of it(recursive)
#include <bits/stdc++.h>
using namespace std;
struct Node{
	int val;
	Node *left;
	Node * right;
	
	Node(int data){
		val=data;
		left=right=NULL;
	}
};
void preorder( Node *root){
	if(root==NULL)
	return;
	cout<<root->val;
	preorder(root->left);
	preorder(root->right);
}
int main() {

struct Node *root=new Node(1);
root->left=new Node(3);
root->right=new Node(2);
root->left->right=new Node(5);

preorder(root);
	return 0;
}