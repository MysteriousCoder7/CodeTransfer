#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    void sayhello(){
        cout<<"Hello Power Rangers"<<endl;
    }
    // void sayhello(string name){
    //     cout<<"Hello Power Ranger "<<name<<endl;//This led to function overloading
    // }
};
class B{
    public:
    int a;
    int b;
    int operator+ (B &obj){
        int val1=this->a;
        int val2=obj.a;
        cout<<"Output : Val2-Val1 "<<val2-val1<<endl;
    }
};
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    //Body
    B obj1,obj2;
    //obj.sayhello();
    obj1.a=7;
    obj2.a=8;
    obj1+obj2;
    return 0;
}