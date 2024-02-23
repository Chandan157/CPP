#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this->data=data;
            this->next=NULL;
        }
};

void print(Node* head){
    Node* temp =head;
    if(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

Node* getMid(Node* &head){
    if(head==NULL){
        cout<<"LL is empty"<<endl;
        return head;
    }

    if(head->next==NULL){
        return head;
    }

    Node* slow=head;
    Node* fast=head;
    while(head!=NULL){
        fast=fast->next;
        if(head!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
    }
    return slow;
}

int main(){
    Node* head=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* fourth=new Node(40);
    Node* fifth=new Node(50);

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;

    print(head);

    cout<<"Middle node"<<getMid(head)->data<<endl;
    return 0;
}