#include <iostream>
using namespace std;
class Node{
public:
int data;
Node *Next;
Node(int data){
this->data=data;
this->Next=NULL;
}

};
void insertAtstart(Node* &head,int d){
Node* temp=new Node(d);
temp->Next=head;
head=temp;
}
void printList(Node* &head){
Node * temp=head;
while(temp!=NULL){
cout<<temp->data<<endl;
temp=temp->Next;
}
}
int main (){
Node* node1= new Node(10);
Node* head=node1;
printList(head);
insertAtstart(head,12);
printList(head);
// cout<<node1->data<<endl;
return 0;
}