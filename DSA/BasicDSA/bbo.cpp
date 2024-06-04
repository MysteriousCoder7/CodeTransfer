#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int T,N,num,sl,max;
    cin>>T;
    vector<int>arr;
    while(T--){
        cin>>N;
        for(int i=0;i<N;i++){
            cin>>num;
            arr.push_back(num);
        }
        sl=arr[0];
        max=arr[0];
        for(int i=0;i<arr.size();i++){
            if(arr[i]>max){
                sl=max;
                max=arr[i];
            }
            if(arr[i]>sl && arr[i]<max){
                sl=arr[i];
            }

        }
        cout<<sl<<endl;
        arr.clear();
    }
    return 0;
}