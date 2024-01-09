// accessing data members of class using pointer objects..

#include<iostream>
using namespace std;
class Triangle{
    double h,b;
    public:
    void getdata(){
        double height, base;
        cout<<"Enter height and base of triangle :";
        cin>>height>>base;
        h=height;
        b=base;
    }
    int area();
};
int Triangle :: area(){
    
    return (0.5 *b*h);
}
int main(){  //both of thecodes works
    
    //one method (from web)

    // Triangle t1;
    // Triangle *p;
    // p=&t1;
    // p->getdata();
    // cout<<"Area of the rectangle is : "<<p->area();

    //second method (from copy)

    Triangle *t1 =new Triangle();
    t1->getdata();
    cout<<"Area of the rectangle is : "<<t1->area();
}