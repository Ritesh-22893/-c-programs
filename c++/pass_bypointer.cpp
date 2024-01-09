#include <iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    cout<<"enter two numbers"<<endl;    
    int r,u;
    cin>>r>>u;
    cout<<"before swap :"<<r<<" "<<u<<endl;
    swap(&r,&u);
    cout<<"after swap :"<<r<<" "<<u<<endl;
}
