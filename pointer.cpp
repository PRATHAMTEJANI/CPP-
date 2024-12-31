#include<iostream>
using namespace std;
int main()
{
    int a = 34;
    int *ptr ;
    ptr = &a;
    cout<<"the pointer is value =  "<<a<<endl;    // 34
    cout<<"the pointer is value = "<<*ptr<<endl;  // 34
    cout<<"the pointer is address = "<<&a<<endl;  // 0x61ff08
    cout<<"the pointer is address = "<<ptr<<endl; // 0x61ff08

}