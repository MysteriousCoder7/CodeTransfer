#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        //constructor
        Node(int d){
            this->data=d;
            this->next=NULL;
        }
        //Destructor
        ~Node(){
            int value=this->data;
            if(this->next!=NULL){
                delete next;
                next=NULL; 
            }
            cout<<"Memory free with value "<<val<<endl;
        }
};
void InsertNode(Node* &tail,int d){
    //Case 1 Empty list
    //Case 2 Single Node
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    //Body
    return 0;
}