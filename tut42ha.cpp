//cwh example on amiguity in c++
#include<iostream>
using namespace std;

class Base1{
    public:
    void greet(){
        cout<<"how are you"<<endl;
    }

};

class Base2{
    public:
    void greet(){
        cout<<"kaise ho"<<endl;
    }

};

class derived:public Base1,public Base2
{
    int a;
    public:
    void greet(){
        Base2::greet();
    }

};

int main(){
    Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    derived d;
    d.greet();
    return 0;
}