// linked list is a linear data structure which store a collection of element(Nodes) together via links (pointers)

#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};


void printNode(node* n){
   cout<<"[ ";
   while (n!=NULL)
   {
    cout<<" "<<n->data<<" ";
    n=n->next;
   }
   cout<<" ]";
}

int main(){
    node* head=new node();

    node* second =new node();
    node* third=new node();

    head->data=1; // first data in the node
    head->next=second; // we pass the address of the second node;
    second->data=2; // data to the second node;
    second->next=third; //we pass the address of the third node
    third->data=3; // data of the third node;
    third->next=NULL;
    
    printNode(head);

    return 0;
};
