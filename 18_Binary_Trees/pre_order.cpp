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
void PreOrder(TreeNode* root){
  if(root==NULL) return;
  cout<<root->data<<" ";//root
  PreOrder(root->left);//left
  PreOrder(root->right);//right
}
void InOrder(TreeNode* root){
  if(root==NULL) return;
  InOrder(root->left);//left
  cout<<root->data<<" ";//root
  InOrder(root->right);//right
}
void PostOrder(TreeNode* root){
  if(root==NULL) return;
  PostOrder(root->left);//left
  PostOrder(root->right);//right
  cout<<root->data<<" ";//root
}
int main(){
  TreeNode* root=new TreeNode(10);
  TreeNode* a=new TreeNode(20);
  TreeNode* b=new TreeNode(30);
  TreeNode* c=new TreeNode(40);
  TreeNode* d=new TreeNode(50);
  TreeNode* e=new TreeNode(60);
  TreeNode* f=new TreeNode(70);
  root->left=a;
  root->right=b;
  a->left=c;
  a->right=d;
  b->left=e;
  b->right=f;
  cout<<"PreOrder: ";
  PreOrder(root);
  cout<<endl;
  cout<<"InOrder: ";
  InOrder(root);  
  cout<<endl;
  cout<<"PostOrder: ";
  PostOrder(root);
  return 0;
}