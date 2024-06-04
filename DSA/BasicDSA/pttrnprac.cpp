#include<bits/stdc++.h>
using namespace std;
void ptrn1(int n){
    int k=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<k<<" ";
        }
        cout<<endl;
        k++;
    }
}
void ptrn2(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void ptrn3(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k=n;k>=i+1;k--){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
void ptrn4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=i){
                cout<<j<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        for(int k=n;k>=1;k--){
            if(k>i){
                cout<<"  ";
            }
            else{
                cout<<k<<" ";
            }
        }
        cout<<endl;
    }
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    //Body
    int row;
    cin>>row;
    //ptrn1(row);
    //cout<<endl;
    //ptrn2(row);
    ptrn4(row);
    cout<<endl;
    return 0;
}