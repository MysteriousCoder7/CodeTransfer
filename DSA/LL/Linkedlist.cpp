#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        //constructor
        Node(int data){
            this->data=data;
            this->next=NULL;
        }
        //destructor
        ~Node(){
            int val=this->data;
            //memory free
            if(this->next!=NULL){
                delete next;
                this->next=NULL;
            }
            
            cout<<"Memory is free for code with data :"<<val<<endl;
        }
};
void InsertAtHead(Node* &head,int d){
    //New Node creation
    //Address is passed to prevent creation of a copy
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;//Head updation
}
void InsertAtTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=tail->next;//Tail updation
}
void InsertAtPosition(Node* &head,Node* &tail,int pos,int d){
    //cannot add at first position for that
    if(pos==1){
        InsertAtHead(head,d);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }
    //Inserting at last position
    Node* NodetoInsert=new Node(d);
    if(temp->next==NULL){
        InsertAtTail(tail,d);
        return;
    }
    NodetoInsert->next=temp->next;
    temp->next=NodetoInsert;
}
void DeleteNode(int pos,Node* &head){
    //The head wont work cause we need to update it thus for just the  first
    //member we need a sep logic
    if(pos==1){
        Node *temp=head;
        head=head->next;
        //memory free
        temp->next=NULL;
        delete(temp);
    }
    else{
            Node* curr=head;
            Node*prev=NULL;
            int cnt=1;
            while(cnt<=pos-1){
                prev=curr;
                curr=curr->next;
                cnt++;
            }
            prev->next=curr->next;
            curr->next=NULL;
            delete curr;
        }
    
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    //New node creation 
    Node* node1=new Node(10);
    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;
    //Head pointed to Node
    Node *head=node1;
    Node *tail=node1;
    print(head);
    //Insertion
    InsertAtTail(tail,12);
    print(head);
    InsertAtHead(head,15);
    print(head);
    InsertAtPosition(head,tail, 4,24);
    print(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    DeleteNode(2,head);
    return 0;
}