//note: i was unable to do sum using return by reference and pointer so i did program to compare smaller no. between any two no.
// return by reference example

#include<iostream>
using namespace std;
int& small(int &a, int &b){
   if(a<b){
    return a;
   }
   else{
    return b;
   }
}
int main()
{
    int x,y;
    cout<<"Enter two numbers : ";
    cin>>x>>y;
    // sum(x,y);
    cout<<"The smaller number is: "<<small(x,y);
    return 0;
}

// return by pointer example

#include <iostream>
using namespace std;
int *small(int *a, int *b)
{
    if (*a < *b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int x, y;
    cout << "Enter two numbers : ";
    cin >> x >> y;
    // this
    //  int *result=small(&x,&y);
    //  cout<<"The smaller number is: "<<*result;

    // or
    cout << "The smaller number is: " << *small(&x, &y);
    return 0;
}

// return by value example :

#include <iostream>
using namespace std;
int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int x, y;
    cout << "Enter two numbers : ";
    cin >> x >> y;
    // sum(x,y);
    cout << "The smaller number is: " << sum(x,y);
    return 0;
}