#include <iostream>
using namespace std;
int main()
{
    // // int array[] = {1,2,3};
    // // cout<<array[1]<<array[0]<<array[2];

    // int marks[6];
    // for (int i = 0; i < 7; i++)
    // {
    //     cout << "the marks of " << i << "is this " << marks[i] << endl;
    // }

    int array[2][3] = {{1,2,3},{4,5,6}};
    for(int i =0;i<2;i++)
    {
        for(int j = 0; j <3 ;j++)
        {
            cout<<"the array value is"<<i<<"and " <<j<<"is "<<array[i][j]<<endl;
        }
    }
    return 0;
}