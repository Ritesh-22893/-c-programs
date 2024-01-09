// Write a program according to the specification given below:

// - Create a class Account with data members acc no, balance, and min_balance(static)
// -Include methods for reading and displaying values of objects
// - Define static member function to display min_balance
// -Create array of objects to store data of 5 accounts and read and display values of each object

#include <iostream>
using namespace std;
class Account
{
    int accno;
    float balance;
    static int min_balance;

public:
    void readdata()
    {
        cout << "\nEnter Account No : ";
        cin >> accno;
        cout << "Enter Balance : ";
        cin >> balance;
    }

    void displaydata()
    {
        cout << "\nAccount No : " << accno << endl;
        cout << "Balance : " << balance << endl;
    }

    static void readmin_balance()
    {
        cout << "\nEnter minimum balance : ";
        cin >> min_balance;
    }

    static void displaymin_balance()
    {
        cout << "Minimum Balance : " << min_balance<<endl;
    }
};
int Account::min_balance = 0;
int main()
{
    Account a[5];
    Account::readmin_balance();

    cout << "\n\n========== Enter Account information ==========" << endl;

    for (int i = 0; i < 5; i++)
    {
        a[i].readdata();
    }

    cout << "\n\n============ Account Details =============" << endl;

    for (int i = 0; i < 5; i++)
    {
        a[i].displaydata();
        a[i].displaymin_balance();
    }
    return 0;
}