#include <iostream>
using namespace std;
void printnumbers()
{
    int n = 0; // set starting point
label:
    cout << n << endl;
    n++;
    if (n <= 5)
    {
        goto label;
    }
}
int main()
{
    printnumbers();
    return 0;
}
//operator precedence = / * + - %.