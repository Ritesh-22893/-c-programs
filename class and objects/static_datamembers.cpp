
//static data member as count  
//on using static data member :   static int count=0; instead of simply int count=0; we are making the static count change for each defined object..
#include<iostream>
using namespace std;
class Friends
{
  string name;
   int count=0;
  public:
  void getname(){
    cout<<"Enter the name of your "<<count+1<<" friend : ";
    cin>>name;
    count++;
  }
  void showname(){
    cout<<"friend name :"<<name<<endl;
  }
};
// int Friends::count=0;/
int main()
{
    Friends binish,samir,ganesh;
    binish.getname();
    samir.getname();
    ganesh.getname();
    binish.showname();
    samir.showname();
    ganesh.showname();
    return 0;
}