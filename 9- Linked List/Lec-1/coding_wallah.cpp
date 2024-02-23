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


//inserting node at head...................................
void insertAtHead(Node* &head,int val){
    Node* new_node=new Node(val);
    new_node->next=head;
    head=new_node;
}
// ........................................................

//inserting node at tail...................................

void insertAtTail(Node* &head,int val){
    Node* new_node=new Node(val);

    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    //temp has reached last node
    temp->next=new_node;
}

// ........................................................

//middle mai insert........................................

void insertAtPosition(Node* &head, int val, int pos){
    if(pos==0){
        insertAtHead(head,val);
        return;
    }

    Node* new_node=new Node(val);
    Node* temp=head;
    int current_pos=0;
    while(current_pos!=pos-1){
        temp=temp->next;
        current_pos++;
    }

    //temp is pointing to node at pos-1
    new_node->next=temp->next;
    temp->next=new_node;
}

//.........................................................

//Updating.................................................

void updateAtPosition(Node* &head,int k,int val){
    Node* temp=head;
    int current_pos=0;
    
    while(current_pos!=k){
        temp=temp->next;
        current_pos++;
    }

    //temp will be pointing to the kth node
    temp->val=val;
}

//.........................................................

//Deletion of first node.................................................

void deleteAtHead(Node* &head){
    Node* temp=head; //node to be deleted
    head=head->next;
    free(temp);
}

//.........................................................
//Deletion of last node.................................................

void deleteAtTail(Node* &head){
    Node* second_last=head;
    while(second_last->next->next!=NULL){
        second_last=second_last->next;
    }

    Node* temp=second_last->next;
    second_last->next=NULL;
    free(temp);
}

//.........................................................

//Deletion at position.....................................

void deleteAtPosition(Node* &head,int pos){
    if(pos==0){
        deleteAtHead(head);
        return;
    }

    int curr_pos=0;
    Node* prev=head;
    while(curr_pos!=pos-1){
        prev=prev->next;
        curr_pos++;
    }

    //prev is pointing to node at pos-1
    Node* temp=prev->next;
    prev->next=prev->next->next;
    free(temp);
}

//.........................................................


//Display..................................................
void display(Node* head){
    Node* temp =head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

//.........................................................


int main(){
    // Node* n=new Node(1);
    // cout<<n->val<<" "<<n->next<<endl;

    Node* head=NULL;
    insertAtHead(head,2);
    display(head);
    insertAtHead(head,1);
    display(head);
    insertAtTail(head,3);
    display(head);
    insertAtPosition(head,4,2);
    display(head);
    updateAtPosition(head,1,5);
    display(head);
    // deleteAtHead(head);
    // display(head);
    // deleteAtTail(head);
    // display(head);
    deleteAtPosition(head,2);
    display(head);

    return 0;
}