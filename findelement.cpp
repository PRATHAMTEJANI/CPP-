#include<iostream>
using namespace std;
void findelements(int array[] ,int size , int key )
{
    for(int i = 0 ; i < size ; i++)
    {
        if(array[i] == key)
        {
            cout << "element are found "<<i++ << endl;
            break;
        }
    }

}
int main()
{
    int array[] = {1,2,3,4,5,6,74,8,9,7};
    int size = 10;
    int key = 5;

    findelements(array , size , key);

    return 0;
}