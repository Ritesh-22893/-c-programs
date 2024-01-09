
//creating arrays of object (code with harry)

#include <iostream>
using namespace std;
class shop
{
    int itemid[20];
    int itemprice[20];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setprice(void);
    void displayprice(void);
};
void shop::setprice(void)
{
    cout << "Enter Id of your item number " << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "Enter price of your item" << endl;
    cin >> itemprice[counter];
    counter++;
}
void shop::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with Id " << itemid[i] << " is " << itemprice[i]<<endl;
    }
}
int main()
{
    shop dokan;
    dokan.initcounter();
    dokan.setprice();
    dokan.setprice();
    dokan.setprice();
    dokan.displayprice();
    return 0;
}