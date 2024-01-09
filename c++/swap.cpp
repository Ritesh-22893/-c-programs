#include<iostream>
using namespace std;
    void swap(int *a,int *b)
    {
        int temp=*a;
        *a=*b;
        *b=temp;
    }

int main()
{
    int p=4,q=9;
    cout<<"before swap :"<<p<<" "<<q<<endl;
    swap(&p,&q);
    cout<<"after swap :"<<p<<" "<<q<<endl;
    return 0;
}



