
// // understand the array of objects and passing objects as arguments.
// #include <iostream>
// using namespace std;

// // making a class complex

// class complex{
//     int a,b;
//     public:
//         void setdata(int x, int y);
//         void setbysum(complex o1,complex o2);
// };

// // designing a function setdata to set the inputted data from the user to form our required complex number
// void complex :: setdata(int x,int y){
//     a = x;
//     b = y;
//     cout<<"complex number is: "<<a<<" + "<<b<<"i"<<endl;
// }

// /*
// designing another function setbysum wherein the real part of the number is the sum of the real parts of the
// previously entered numbers and the imaginary part is the sum of the previously entered imaginary parts.
// */

// void complex :: setbysum(complex c1,complex c2){
//     a = c1.a + c2.a;
//     b = c1.b + c2.b;
//     cout<<"complex number by the sum of previously entered numbers is: "<<a<<" + "<<b<<"i"<<endl;
// }

// int main () {
//     complex c[2];
//     int x,y;
//     cout<<"enter the real coefficient of the complex number: ";
//     cin>>x;
//     cout<<"enter the imaginary coefficient of the complex number: ";
//     cin>>y;
//     c[0].setdata(x,y);
//     cout<<"enter the real coefficient of the complex number: ";
//     cin>>x;
//     cout<<"enter the imaginary coefficient of the complex number: ";
//     cin>>y;
//     c[1].setdata(x,y);
//     c[2].setbysum(c[0],c[1]);
//     return 0;
// }


#include<iostream>
using namespace std;
class complex{
int a,b;
public:
void setdata(int num1, int num2){
    a=num1;
    b=num2;
}
void sumcomplex(complex *n1, complex *n2){
    a=n1->a+n2->a;
    b=n1->b+n2->b;
}
void displaysum(){
    cout<<a<<" "<<b<<endl;
}
};
int main()
{
    complex a1,a2,a3;
    a1.setdata(2,4);
    a1.displaysum();
    a2.setdata(5,8);
    a2.displaysum();
    a3.sumcomplex(&a1,&a2);
    a3.displaysum();
    return 0;
}
