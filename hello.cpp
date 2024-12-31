#include <iostream>
using namespace std;
int main()
{

    // print the value.
    cout << "hello world" << endl;
    cout << "hi pratham" << endl;

    // cariable making conditions
    //  int a  = 4 , b = 5  , c = 6 ;
    //  short s = 3;
    //  cout<< a , b , c;
    //  cout<<s<<endl;

    // camelcase notations
    // int marksinMaths = 83;
    // cout<<marksinMaths<<endl;
    // cout<<"the marks of maths is"<<marksinMaths<<endl;
    // return 0;

    // priority of data types

    // short a;
    // int b;
    // long c;
    // long long d;

    // // new 1
    // float score = 83.25;
    // cout<<"the score is"<<score;

    // //new 2
    // float const var = 5.222;//we cant change constants value if we declare variable as constants.
    // var = 5.66;
    // cout<<"the var is"<<var;

    // user input take. and operators.

    int a, b;
    cout << "enter first number" << endl;
    cin >> a; // works to store a value entered by user.[cin>>]
    // cout<<"the first no. is"<<a;
    cout << "enter second number" << endl;
    cin >> b;
    cout << "the first no. is" << a << "your second no. is" << b << endl;
    cout << "the sum is" << a + b << a - b << a * b << (float)a / b;
}