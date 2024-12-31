#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n <=1 )
    {
        return 1;
    }
    
    return n * factorial(n-1);
    // n = 5
    // 5 * factorial(4)
    // 5 * 4 * factorial(3)
    // 5 * 4 * 3 * factorial(2)
    // 5 * 4 * 3 * 2 * factorial(1)false because of first condition
    //answer = 120.
    // here it call itself until n<=1 and then return as per return statement.  
}
int main()
{
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    cout<<"factorial of n is :-  "<< factorial(n);
    return 0;

}