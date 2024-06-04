#include<bits/stdc++.h>
using namespace std;
void ExpVector(){
    vector<int>v;
    v.push_back(1);
    v.emplace_back(2);
    cout<<v[0]<<" "<<v[1]<<endl;
    vector<pair<int,int>>vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4);
    cout<<vec[0].first<<" "<<vec[1].first<<endl;
    vector<int>v1(5,100);//5 instances of 100
    vector<int>v2(v1);//v1 copied into v2;
    cout<<v2.at(2)<<endl;
    vector<int>::iterator it=v.begin();
    cout<<*(it)<<endl;
   // cout<<v[1]<<endl;
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    //INSERT FXN
    
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    //Body
    ExpVector();
    return 0;
}