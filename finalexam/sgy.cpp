#include<iostream>
using namespace std;

class node{
	public:
	 int data;
	 node* next;
};

int main(){
 node* head;
 node* one=NULL;
 node* two =NULL;
 node* three=NULL;


 one = new node();
 two = new node();
 three = new node();

 one->data=22;
 two->data=12;
 three->data=21;
 one->next=two;
  two->next=three;
  three->next=NULL;

  head = one;
  while (head != NULL)
  {
	 cout<<head->data<<endl;
	 head=head->next;
  }
  
}