#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "enter your age";
    cin >> age;

    switch (age)
    {
    case 12:
        cout << "you are 12 years  old";
        break;

    case 18:
        cout << "you are 18 years old";
        break;
    default:

        cout << "you are not 12 and 18 yeard old";
        break;
    }
}