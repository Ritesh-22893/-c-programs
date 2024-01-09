#include<iostream>
using namespace std;
 
class student{
private:
int a,b,c;
public:
int e,f;
void getdata(int a1,int b1, int c1); //declaration
void showdata(){
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of b is "<<b<<endl;
    cout<<"the value of c is "<<c<<endl;
    cout<<"the value of e is "<<e<<endl;   
    cout<<"the value of f is "<<f<<endl;
}
};

void student :: getdata(int a1,int b1,int c1){
a=a1;
b=b1;
c=c1;
}
int main()
{
    student ritesh;
    
    ritesh.e=45;
    ritesh.f=34;
    ritesh.getdata(3,2,4);
    ritesh.showdata();
    return 0;
}