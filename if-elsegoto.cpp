#include <iostream>
using namespace std;
int main()
{
    int a;
    int label_1 , label_2;
    cout << "Enter a number to find and make snack";
    cin >> a;

    if (a >= 0  &&   a <= 10)
    {
    label_1:cout << "i am hungry ";
        goto label_2;
    }
    else
    {

        goto label_1;
        label_2 : cout << "i want some snack 'mom' ";
    }
    return 0;
}            

// today  work is decision makinf statements > course. and write a findelements. 