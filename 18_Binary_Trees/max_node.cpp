#include<iostream>
#include<climits>
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
int TreeMaxNode(TreeNode* root){
  if(root==NULL) return INT_MIN;
  int lmax=TreeMaxNode(root->left);
  int rmax=TreeMaxNode(root->right);
  return max(root->data, max(lmax,rmax));
}
int TreeSize(TreeNode* root){
  if(root==NULL) return 0;
  return 1 + TreeSize(root->left) + TreeSize(root->right);
}
int main(){
    cout<<"Tree Node"<<endl;
    TreeNode* root=new TreeNode(10);
    TreeNode* a=new TreeNode(20);
    TreeNode* b=new TreeNode(30);
    TreeNode* c=new TreeNode(15);
    TreeNode* d=new TreeNode(25);
    TreeNode* e=new TreeNode(15);
    TreeNode* f=new TreeNode(-5);
    root->left=a;
    root->right=b;
    a->left=c;
    a->right=e;
    b->right=d;
    b->left=f;
    cout<<root->data<<endl;
    DisplayTree(root);
    cout<<endl;
    cout<<"Max Node: "<<TreeMaxNode(root)<<endl;
    cout<<"Size of Tree: "<<TreeSize(root)<<endl;
    return 0;
}