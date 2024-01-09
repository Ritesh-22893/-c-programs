//defining member function outside the class

#include<iostream>
using namespace std;
class cuboid
{
int l,b,h;
public:
void getdata(int len,int bread,int hght)
  {
    l=len;
    b=bread;
    h=hght;
  }
int showdata(); //declaration of this member function for accessing it outside the class.
};



//this is syntax (returntype of declared function + classname  + :: + declared function name)

int cuboid ::showdata()   //using scope resolution operator to access function inside class
{
    return (l*b*h);
} 
int main()
  {
    cuboid volume;
    volume.getdata(1,2,3);
    cout<<"volume of cuboid is "<<volume.showdata()<<endl;
    return 0;
  }