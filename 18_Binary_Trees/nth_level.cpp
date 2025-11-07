#include<iostream>
#include<queue>
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
void LevelWise(TreeNode* root,int curr,int level){
  if(root==NULL) return;
  if(curr==level){
    cout<<root->data<<" ";
    return;
  }
  LevelWise(root->left,curr+1,level);
  LevelWise(root->right,curr+1,level);
}
int TreeLevel(TreeNode* root){
  if(root==NULL) return 0;
  return 1 + max(TreeLevel(root->left), TreeLevel(root->right));
}
void LevelOrder(TreeNode* root){
  int n=TreeLevel(root);
  for(int i=1;i<=n;i++){
    LevelWise(root,1,i);
    cout<<endl;
  }
}

void BFS(TreeNode* root){
  queue<TreeNode*> q;
  q.push(root);
  while(!q.empty()){
    TreeNode* temp=q.front();
    q.pop();
    cout<<temp->data<<" ";
    if(temp->left) q.push(temp->left);
    if(temp->right) q.push(temp->right);
  }
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
  // cout<<"PreOrder: ";
  // PreOrder(root);
  // cout<<endl;
  // cout<<"InOrder: ";
  // InOrder(root);  
  // cout<<endl;
  // cout<<"PostOrder: ";
  // PostOrder(root);

  // int level;
  // cin>>level;
  // LevelWise(root,1,level);
  BFS(root);
  cout<<endl;
  cout<<"Level Order: "<<endl;
  LevelOrder(root);
  return 0;
}