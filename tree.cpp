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
//-------------------------------------------------------------------------------------------------------------
//Level order traversal (Leetcode 102)
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;  //tree ka node store in a queue,so tree type ka queue
        
        if(root==NULL){
            return ans;
        }
        q.push(root);  //queue me dal rhe root ko.
        while(!q.empty()){
            vector<int> level;
           int size=q.size();
            for(int i=0;i<size;i++){   //el level me itereate krega jitna element hoga
                TreeNode* node= q.front();  
                q.pop();
                if(node->left!=NULL)q.push(node->left);
                    if(node->right!=NULL)q.push(node->right);
                        
                        level.push_back(node->val);
                    
                
            }
            ans.push_back(level);
            
            
            
            
        }
        return ans;
    }
};