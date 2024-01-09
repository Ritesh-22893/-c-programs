// using same function name with different number of parameters.
//or
//same number of parameters with different function name.

//program demonstrating function overloading.

// #include <iostream>
// using namespace std;

// //area of square
// int area(int length){
//     return (length * length);
// }

// //areaa of rectangle
// int area(int length, int breadth){
//     return (length*breadth);
// }

// int main()
// {
//    cout<<"area of square of lenght 6 is "<<area(6)<<endl;
//    cout<<"area of rectangle of lenght 6 and breadth 7 is "<<area(6,7)<<endl;
//    return 0;
// }


#include <iostream>
using namespace std;

//area of square
int area(int length, int breadth){
    return (length * breadth);
}

//areaa of rectangle
float area(float length, float breadth){
    return (length*breadth);
}

int main()
{
   cout<<"area of rectangle of lenght 2 and breadth 7 is "<<area(2,7)<<endl;
   cout<<"area of rectangle of lenght 6 and breadth 7 is "<<area(6.8,7)<<endl;
   return 0;
}