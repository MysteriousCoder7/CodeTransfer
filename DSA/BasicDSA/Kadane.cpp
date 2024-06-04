#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    //Body
    vector<int>vec;
    int N,val,maxi=INT_MIN,sum=0;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>val;
        vec.push_back(val);
    }
    sum=vec[0];
    for(int i=1;i<vec.size();i++){
        sum+=vec[i];
        if(sum<0){
            sum=0;
        }
        maxi=max(sum,maxi);
    }
    cout<<maxi;
    return 0;
}