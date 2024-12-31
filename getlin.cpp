#include<iostream>
using namespace std;
int main()
{
    string str;
    for(int i = 0 ; i < 4 ; i++)
    {
        getline(cin , str);
        cout << str <<"<--- this is use of getline command "<< endl;
        cout << str <<"<--- second use of it "<< endl;
        cout << str <<"<--- second use of it "<< endl;
        cout << str <<"<--- second use of it "<< endl;
        cout << str <<"<--- second use of it "<< endl;
    }
    
    // #include <iostream>
    // #include <string>
    // using namespace std;
    
    // int main() {
    //     string str;
    //     for (int i = 0; i < 4; i++) {
    //         getline(cin, str);
    //         cout << str << "<--- this is use of getline command " << endl;
    //         cout << str << "<--- second use of it " << endl;
    //     }
    //     return 0;
    // }

}
// getline command is use for only read highlighted sentence from user.
// we can use getline command in loop also.for read multiple sentence from user.