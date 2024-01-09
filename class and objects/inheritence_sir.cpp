#include<iostream>
using namespace std;
class A
{
public:
void show(){
    cout<<"object called"<<endl;
}
};
class B:public A
{
public:
void show2(){
    cout<<"hurray"<<endl;
}
};
int main()
{
    A a1;
    a1.show();
    return 0;
}