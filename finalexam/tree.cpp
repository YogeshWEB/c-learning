#include<iostream>
using namespace std;
 
 class bsnode{
	 public:
	  int data;
	  bsnode* right;
	  bsnode* left;
	  

 };
  bsnode* node=NULL;
 void insert(int a){
	
	 
	 node=new bsnode();
	 node->data=a;
	 node->left=NULL;
	 node->right=NULL;
	 cout<<node->data;
 }
 void insert_right(){
	 
 }
 int main(){
	
	insert(5);
	bsnode* root;
	
	
 }