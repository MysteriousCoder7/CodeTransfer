#include<bits/stdc++.h>
using namespace std;
int func(int n){
    if(n==0){
        return 0;
    }
    func(n-1);
    cout<<n<<endl;
}
int main(){
    int N;
    cin>>N;
    func(N);
    return 0;
}