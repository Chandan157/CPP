#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;

        //constructor
        Node(){
            this->data=0;
            this->prev=NULL;
            this->next=NULL;
        }

        Node(int data){
            this->data=data;
            this->prev=NULL;
            this->next=NULL;
        }

        ~Node(){
            cout<<"Node with value:"<<this->data<<"deleted"<<endl;
        }
};

void print(Node* &head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int getLength(Node* head){
    int len=0;
    Node* temp=head;

    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}

void insertAtHead(Node* &head,Node* &tail,int data){
    if(head==NULL){
        //LL is empty
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    else{
        // LL is empty
        // step1: create a node
        Node* newNode=new Node(data);
        //step2
        newNode->next=head;
        //step3
        head->prev=newNode;
        //step4: head ko update kr dena hai
        head=newNode;
    }
}


void insertAtTail(Node* &head,Node* &tail,int data){
    if(head==NULL){
        //LL is empty
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
    }
    else{
        // LL is not empty
        Node* newNode=new Node(data);
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
    }
}

void insertAtPosition(Node* &head,Node* &tail,int data,int position){
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
    }
    else{
        //LL is not empty
        if(position==1){
            insertAtHead(head,tail,data);
            return;
        }
        int len=getLength(head);
        if(position>len){
            insertAtTail(head,tail,data);
            return;
        }
        //insertion in middle
        //step1: find prev and curr
        int i=1;
        Node* prevNode=head;
        while(i<position-1){
            prevNode=prevNode->next;
            i++;
        }
        Node* curr=prevNode->next;

        //step2: create a node
        Node* newNode=new Node(data);

        //step3:
        prevNode->next=newNode;
        newNode->prev=prevNode;
        curr->prev=newNode;
        newNode->next=curr;
    }
}

void deleteAtPosition(Node* &head,Node* &tail,int position){
    if(head==NULL){
        cout<<"Link list is empty";
        return;
    }
    if(head->next==NULL){
        //single node hai
        Node* temp=head;
        head=NULL;
        tail=NULL;
        delete temp;
        return;
    }

    int len=getLength(head);
    if(position>len){
        cout<<"please enter the valid position"<<endl;
        return;
    }

    if(position==1){
        Node* temp=head;
        head=head->next;   //baad wale node head ban gaya
        head->prev=NULL;   // prev matlab jo arrow piche aa raha tha use cut kr diya
        temp->next=NULL;   // ab humne temp ka next arrow bhi cut kr diya
        delete temp;
        return;
    }
    if(position==len){
        //delete last node
        Node* temp=tail;
        tail=tail->prev;
        temp->prev=NULL;
        tail->next=NULL;
        delete temp;
        return;
    }

    //delete from middle of the LL
    // step1: find left,right,curr
    int i=1;
    Node* left=head;
    while(i<position-1){
        left=left->next;
        i++;
    }
    Node* curr=left->next;
    Node* right=curr->next;

    //step2:
    left->next=right;

    //step3:
    right->prev=left;

    //step4:
    curr->next=NULL;
    curr->prev=NULL;
    delete curr;

}

int main(){
    Node* first=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);

    Node* head=first;
    Node* tail=third;

    first->next=second;
    second->prev=first;

    second->next=third;
    third->prev=second;

    print(first);
    cout<<endl;

    insertAtHead(head,tail,101);
    cout<<endl;
    print(head);
    
    insertAtTail(head,tail,501);

    cout<<endl;
    print(head);

    insertAtPosition(head,tail,7,2);

    cout<<endl;
    print(head);

    deleteAtPosition(head,tail,1);
    cout<<endl;
    print(head);

    return 0;
}