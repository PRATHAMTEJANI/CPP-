#include<iostream>
using namespace std;
int main()
{
    int a;
    a = 243;
    float c = 0.0; // Initialize the float variable
    string D = "pratham"; // Use string type for multiple characters
    
    cout << "The name is: " << D << endl;
    return 0;
}
/* there are 3 typeof variable in c++: 
 1> local variable - defined inside the function or block.
 2>instance variable - defined inside the class but outside.
 3>static variable - defined inside the class but outside. inshort oustside of the function.
 */

/* 
the static and global variable are we cann change it after declaration of 1T 
using function.


// global variable
int global = 5;

void display()
{
	cout<<global<<endl;
}

// main function
int main()
{
	display();
	
	// changing value of global
	// variable from main function
	global = 10;
	display();
}*/
