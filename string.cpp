#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name = "harry";
    cout << "the name is " << name << endl;
    cout << "the name is " << name.length();//give the length of string in number.
    cout << "the name is " << name.substr(0,3)<<endl;
    cout << "the name is " << name.substr(0,5)<<endl;//only print the string in b/t length and choice varialble.
    cout << "the name is " << name.substr(2,3)<<endl;
}