#include<iostream>
using namespace std;

class Node{
    public:
        int val;
        Node* next;

        Node(int data){
            val=data;
            next=NULL;
        }
};

//inserting node at head

void insertAtHead(Node* &head,int val){
    Node* new_node=new Node(val);
    new_node->next=head;
    head=new_node;
}

//Display
void display(Node* head){
    Node* temp =head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    // Node* n=new Node(1);
    // cout<<n->val<<" "<<n->next<<endl;

    Node* head=NULL;
    insertAtHead(head,2);
    display(head);

    return 0;
}