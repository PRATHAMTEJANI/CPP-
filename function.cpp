# include <iostream>
using namespace std;
int sum();//declaration of function

int sum(int a , int b)//declared funcgtion defination
{
    return a + b;
}

int main() // call the function.    
{
    cout<<"the sum is "<<sum(2,5);
    cout<<"the sum is "<<sum(5,8);
    return 0;

}
//endl = \n also be a same