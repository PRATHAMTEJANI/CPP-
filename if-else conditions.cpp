#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "enter your age" << endl;
    cin >> age;
    if (age > 18) // if(age > 150 || age <= 18)
    {
        cout << "you are eligible for voating";
    }
    else if (age > 150)
    {
        cout << "you can human?";
    }
    else
    {
        cout << "you are not ready for voat";
    }

    return 0;
} // code is work on online compiler.