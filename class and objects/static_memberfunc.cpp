
//static member function ko kam static data members lai access garni matra ho..
//Static member function ma static data members bahek aru kunai variable lai print hanna layo vani error aauxa
#include <iostream>
using namespace std;
class Student
{
    char name[30];
    float marks;
    static int count;

public:
    void getdata()
    {
        cout << "Enter name and marks of student :";
        cin >> name >> marks;
        count++;
    }
    void showdata(){
        cout << "Name : " << name << endl;
        cout << "Marks : " << marks << endl;
    }
    static void countrank()
    {
        cout << "Rank " << count<< endl;
        // cout<<name;  this will show error
    }
};
int Student::count = 1; //count ko value lai initialize gareko
int main()
{
    Student s1,s2,s3;
    Student::countrank(); //static membre funcions lai object banauna pardena sidai class ko name le hunxa
    s1.getdata();
    Student::countrank();
    s2.getdata();
    Student::countrank();
    s3.getdata();
    s1.showdata();
    s2.showdata();
    s3.showdata();
    return 0;
}