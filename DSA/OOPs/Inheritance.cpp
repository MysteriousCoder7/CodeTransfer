#include<bits/stdc++.h>
using namespace std;
class Human{
    public:
        int height;
        int weight;
        int age;
    int getage(){
        cout<<this->age;
    }
    int setweight(int w){
        this->weight=w;
    }
};
class Male:public Human{
    public:
        string color;
        void defence(){
            cout<<"Draciel is defending beyblade";
        }
};
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    //Body
    Male Max;
    Max.setweight(76);
    cout<<Max.age<<endl;
    cout<<Max.height<<endl;
    cout<<Max.weight<<endl;
    cout<<Max.age<<endl;
    Max.defence();
    return 0;
}