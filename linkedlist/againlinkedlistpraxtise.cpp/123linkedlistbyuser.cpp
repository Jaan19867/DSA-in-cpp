#include<iostream>
using namespace std;

class Node{
public:
int data;
Node *next;
Node(int data){
    this->data=data;
    this->next=NULL;

 }










};
 Node *takeinput(){
int data;
cin>>data;
Node *head=NULL;
Node *tail=NULL;
while(data!=-1){
    Node *newnode=new Node(data);
    if(head==NULL){  head=newnode;
    tail=newnode;
    
    }
    else
    
{ tail->next= newnode;
tail=tail->next;       }

cin>>data;
}
return head;
 }

     Node* insertNode(Node *head,int i,int data){
        Node *newNode=new Node(data);
        int count=0;
        Node *temp=head;
        if(i==0){   newNode->next=head;
        head=newNode;
        return head;
        }
        while(count<i-1&& temp!=NULL){ temp=temp->next;
        count++;   }
 if (temp == NULL) {
        return head;
    }
    
Node *a=temp->next;
temp->next=newNode;
newNode->next=a;
return head;
     
     
     
     }
void print(Node *head){  Node *temp=head;
while(temp!=NULL){
cout<<" "<<temp->data;
temp=temp->next;}
     }

     


int main(){

    Node *head=takeinput();
    print(head);
    int i;int data;
    cout<<endl;
    cin>>data>>i;
    head =insertNode(head,i,data);
    print(head);
}