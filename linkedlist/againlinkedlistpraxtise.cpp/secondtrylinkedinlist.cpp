#include<iostream>
using namespace std;

class Node{
    public:
int data;
Node *next;
Node(int data){
    this->data=data;
    next=NULL;

    
}
};
void print(Node *head){
Node *temp=head;
    while(temp!=NULL){
        cout<<" "<<temp->data;
        temp=temp->next;

    }
   
}



int main(){
Node *n1= new Node(1);
Node *head=n1;
// above n1 is a pointer;
Node *n2= new Node(2);
n1->next=n2;
Node *n3= new Node(3);
n2->next=n3;
Node *n4= new Node(4);
n3->next=n4;
Node *n5= new Node(5);
n4->next=n5;
print(head);

}