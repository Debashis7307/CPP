#include<iostream>
using namespace std;

class TreeNode{
public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int data){
      this->data=data;
      this->left=NULL;
      this->right=NULL;
    }
};
void DisplayTree(TreeNode* root){
  if(root==NULL) return;
  cout<<root->data<<" ";
  DisplayTree(root->left);
  DisplayTree(root->right);
}
int main(){
    cout<<"Tree Node"<<endl;
    TreeNode* root=new TreeNode(10);
    TreeNode* a=new TreeNode(20);
    TreeNode* b=new TreeNode(30);
    TreeNode* c=new TreeNode(15);
    TreeNode* d=new TreeNode(25);
    root->left=a;
    root->right=b;
    a->left=c;
    b->right=d;
    cout<<root->data<<endl;
    DisplayTree(root);
    return 0;
}