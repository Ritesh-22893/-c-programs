// oops -- classes and objects

// c++ --> initially callled --> C with calsses by stroustroup
//  class --> extension of structures (in C)
//  structures and limitations
//  --->members are public
//  ---> No methods
// classes :
//  ---> structure + more
//  ---> can have  methods and properties
//  ---> cam make few members as private, public and protected

//  we cannot access private member functions and data variables of class in main function
// calss can have objects along with the calss declaration like this:
/* class Student{
   class definition
   } ritesh, bishal, binod, ayush*/

// IMP for concept
//  formal argument === parameter eg : int sum(int x,int y); --> x and y are parameters
//  actual argument === argument eg :  sum (3,6) --> 3 and 6 are argument



//This is just a normal program with member function outside class without using nesting memeber functions
// #include <iostream>
// #include <string>
// using namespace std;

// class Binary
// {
//     string num;

// public:
//     void input();
//     void checkbin();
//     void onescomp();
//     void show();
// };
// void Binary ::input()
// {
//     cout << "Enter any binary number : " ;
//     cin >> num;
//     cout<<"--------------------------------"<<endl;
//     cout<<"Entered number : "<<num<<endl;
// }

// void Binary ::checkbin()
// {
//     for (int i = 0; num.length() > i; i++)
//     {
//         if (num.at(i) != '0' && num.at(i) != '1')
//         {
//             cout << "LOSER !!!! Enter only binary number. Screw you bitch.." << endl;
//             exit(0);
//         }
//     }
// }
// void Binary ::onescomp()
// {
//     for (int i = 0; num.length() > i; i++)
//     {
//         if (num.at(i) == '0')
//         {
//             num.at(i) = '1';
//         }
//         else
//         {
//             num.at(i) = '0';
//         }
//     }
// }
// void Binary ::show()
// {
//     cout << "Ones Complement : ";
    
//     for (int i = 0; i < num.length(); i++)
//     {
//         cout << num.at(i);
//     }
//     cout<<endl;
// }
// int main()
// {
//     Binary n1;
//     n1.input();
//     n1.checkbin();
//     n1.onescomp();
//     n1.show();
//     return 0;
// }



// Applying Nesting of member functions in above program

#include <iostream>
#include <string>
using namespace std;

class Binary
{
    string num;

public:
    void input();
    void checkbin();
    void onescomp();
    void show();
};
void Binary ::input()
{
    cout << "Enter any binary number : " ;
    cin >> num;
    cout<<"--------------------------------"<<endl;
    cout<<"Entered number : "<<num<<endl;
}

void Binary ::checkbin()
{
    for (int i = 0; num.length() > i; i++)
    {
        if (num.at(i) != '0' && num.at(i) != '1')
        {
            cout << "LOSER !!!! Enter only binary number. Screw you bitch.." << endl;
            exit(0);
        }
    }
}
void Binary ::onescomp()
{
    checkbin();
    for (int i = 0; num.length() > i; i++)
    {
        if (num.at(i) == '0')
        {
            num.at(i) = '1';
        }
        else
        {
            num.at(i) = '0';
        }
    }
}
void Binary ::show()
{
    cout << "Ones Complement : ";
    
    for (int i = 0; i < num.length(); i++)
    {
        cout << num.at(i);
    }
    cout<<endl;
}
int main()
{
    Binary n1;
    n1.input();
    // n1.checkbin();
    n1.onescomp();
    n1.show();
    return 0;
}
