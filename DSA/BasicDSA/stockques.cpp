#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    //Body
    int N,val;
    cin>>N;
    vector<int>vec;
    for(int i=0;i<N;i++){
        cin>>val;
        vec.push_back(val);
    }
    int prof=vec[0],mprof=INT_MIN,dif;
    for(int i=1;i<vec.size();i++){
        dif=vec[i]-prof;
        if(dif<0){
            prof=vec[i];
        }
        mprof=max(mprof,dif);
    }
    mprof=max(mprof,dif);
    cout<<mprof;
    return 0;
}