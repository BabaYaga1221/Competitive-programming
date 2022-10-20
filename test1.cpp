#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

Node(int data){
   this->data=data;
   this->next=NULL;
}
~Node(){
    int value=this->data;
    if(this->next!=NULL){
        delete next;
        this->next=NULL;
    }
    cout<<"memory is free for node whose value is "<<value<<endl;
}
};
void inserthead(int d,Node* &head){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void inserttail(int d,Node* &tail){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void insertposition(int d,int p,Node* &head,Node* &tail){
    if(p==1){
        inserthead(d,head);
        return;
    }
    Node*temp=head;
    int c=1;
    while(c<p-1){
       temp= temp->next;
       c++;

    }
    Node* insertposition=new Node(d);
    insertposition->next=temp->next;
    temp->next=insertposition;
    if(temp->next==NULL){
      inserttail(d,tail);
      return;
    }
}
void deletenode(int position, Node* &head){
    if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node*curr=head;
        Node*prev=NULL;
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
void print (Node* &head){
Node*temp=head;
while(temp!=NULL){
    cout<<temp->data<<" ";
   temp= temp->next;
}
cout<<endl;
}
int main(){
    Node* node1=new Node(10);
Node* head=node1;
Node* tail=node1;
inserthead(11,head);
print(head);
inserttail(12,tail);
print(head);
insertposition(13,4,head,tail);
print(head);
deletenode(1,head);
print(head);


return 0;
}