#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    //Body
    int n,val;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>val;
        v.push_back(val);
    }
    /*vector<int>hash(13,0);
    for(int i=0;i<v.size();i++){
        hash[v[i]]+=1;
    }
    int T,occur;
    cin>>T;
    while(T--){
        cin>>occur;
        cout<<hash[occur]<<endl;
    }*/
    map<int,int>mpp;
    for(int i=0;i<v.size();i++){
        mpp[v[i]]++;
    }
     int T,occur;
    cin>>T;
    while(T--){
        cin>>occur;
        cout<<mpp[occur]<<endl;
    }
    return 0;
}