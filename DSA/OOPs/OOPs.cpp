#include<bits/stdc++.h>
#include "class.cpp"
using namespace std;
class hero{
    private:
        int health=100;
    public:
    static int time;
    char *name;//pointer as this is a good practice
    hero(hero &temp){\
        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;
        //cout<<"Copy Constructor called"<<endl;
        //name=new char[100];
        //cout<<this->health<<endl;
    }
    hero(int health){
        //cout<<"Constructor called"<<endl;
        this->health=health;
        //cout<<"Address of this :"<<this<<endl;
    }
    static int random(){
        cout<<time<<endl;
        //cout<<"Random ko bulao bhai"<<endl;
        //cout<<this->health<<endl;
    }
    //Properties
        void print(){
            cout<<"Name :"<<this->name<<endl;
            cout<<"Health :"<<this->health<<endl;
        }
        //char name[100];
        char lvl='A';
        //Getter
        int gethealth(){
            return health;
        }
        //Setter
        void sethealth(int h){
            health=h;
        }
        void setname(char name[]){
            strcpy(this->name,name);
        }
        //DESTRCUCTOR->Used to deallocate memory 
        //it is automatically activated and is inside class only 
        //same name as class,no return type 
        ~hero(){
            cout<<"Destructor called"<<endl;
        }
};
int hero::time=5;
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
   cout<<hero::time<<endl;
   hero::random();
    /*//creation of object
    //Static Allocation
    hero h1(10);
    hero v1(10);
    //DYNAMIC ALLOCATION
    //hero *h2=new hero;
    //cout<<sizeof(h1)<<" ";
    //h1.health=98;
    h1.sethealth(200);
    cout<<h1.lvl<<endl;
    cout<<h1.gethealth()<<endl;
    //(*h2).sethealth(4000);
    //cout<<(*h2).gethealth();
    cout<<"Address of h1 :"<<&h1<<endl;
    hero h3(h1);//h3 at same address and called copy instructor
    //h3.sethealth(20000);
    //cout<<"Address of h2 :"<<&h2<<endl;*/
    // hero hero1(100);
    // hero1.sethealth(100);
    // char name[10]="Ryukendo";
    // hero1.setname(name);
    // hero hero2(hero1);
    // hero1.print();
    // hero2.print();
    // hero1.name[0]='H';
    // hero1.print();
    // hero2.print();
    return 0;
}