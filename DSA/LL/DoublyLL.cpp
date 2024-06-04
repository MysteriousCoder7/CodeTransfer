#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* prev;
        Node* next;
        //constructor
        Node(int d){
            this->data=d;
            this->prev=NULL;
            this->next=NULL;
        }
        //destructor
        ~Node(){
            int val=this->data;
            if(next!=NULL){
                delete next;
                next=NULL;
            }
            cout<<"Node deleted with value "<<val<<endl;
        }
};
void InsertAtHead(Node* &head,int d){
    Node*temp=new Node(d);
    head->prev=temp;
    temp->next=head;
    head=temp;
}
void  InsertAtTail(Node* &tail,int d){
       Node* temp=new Node(d);
       tail->next=temp;
       temp->prev=tail;
       tail=temp;
}
void InsertAtPos(Node* &head,int pos,int d){
    if(pos==1){
        InsertAtHead(head,d);
        return;
    }
    Node *temp=head;
    Node *tempa=head;
    int cnt=1;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }
    cnt=1;
    while(cnt<pos && tempa!=NULL){
        tempa=tempa->next;
        cnt++;
    }
    if(temp->next==NULL || tempa==NULL){
        InsertAtTail(temp,d);
        return;
    }
    Node* NodetoInsert=new Node(d);
    NodetoInsert->prev=temp->next;
    NodetoInsert->next=tempa;
    tempa->prev=NodetoInsert;
    temp->next=NodetoInsert;
}
void DeleteNode(Node* &head,int pos){
    Node* temp=head;
    if(pos==1){
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
}
int getlength(Node* &head){
    int length=0;
    Node* temp=head;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    return length;
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
    //Body
    Node *node1= new Node(10);
    Node* head=node1;
    Node* tail=node1;
    print(head);
    int len=getlength(node1);
    cout<<len<<endl;
    InsertAtHead(head,46);
    print(head);
    InsertAtTail(tail,27);
    print(head);
    InsertAtTail(tail,200);
    print(head);
    InsertAtPos(head,4,34);
    print(head);
    return 0;
}