
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double pi = 3.14159, ip = -3.14159;
    // floor 
    cout << floor(pi) << endl; // +  3    // header file is <bits/stdc++.h> for all.
    cout << floor(ip) << endl; // -   -4

    // ceil
    cout << ceil(pi) << endl; // +  4
    cout << ceil(ip) << endl; // -   -3

    //trunc
    cout<<trunc(pi)<<endl; // +  3
    cout<<trunc(ip)<<endl; // -   -3

    //round
    cout<<round(pi)<<endl; // +  3
    cout<<round(ip)<<endl; // -   -3

    //setprecision 
    cout<<fixed <<  setprecision(0) << pi << " or " << ip <<endl;  //  3/-3
    cout<<fixed <<  setprecision(1) << pi << " or " << ip <<endl;  // 3.1/ -3.1
    cout<<fixed <<  setprecision(2) << pi << " or " << ip <<endl;  // 3.14/-3.14
    cout<<fixed <<  setprecision(3) << pi << " or " << ip <<endl;  //3.142/-3.142
    cout<<fixed <<  setprecision(4) << pi << " or " << ip <<endl;  //3.1416/-3.1416
    cout<<fixed <<  setprecision(5) << pi << " or " << ip <<endl;  //3.14159/-3.14159

    return 0;
}
// use in mathematical equation.
// to folloow the precison of number.
// also round figure as per requirement.
// economics and finance.