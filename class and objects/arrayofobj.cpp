
//from notes

#include <iostream>  
using namespace std;
class Rectangle
{
    int l, b;

public:
    void getdata(int len, int bread)
    {
        l = len;
        b = bread;
    }
    int findarea();
};
int Rectangle::findarea()
{
    return l * b;
}
int main()
{
    Rectangle r[3];
    int x, y;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter length and breadth of rectangle :";
        cin >> x >> y;

        r[i].getdata(x, y);
        cout << "The area of rectangle :" << r[i].findarea() << endl;
    }
    return 0;
}
