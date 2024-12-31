#include<iostream>
using namespace std;
int main()
{
    const int var = 99;
    const float var2 = 9.9;
    
    clog << "the value of var id " << var <<endl ;
    cout << "the value of var id " << var2 <<endl ;
    return 0;
}
/* 
cout (Standard Output Stream):

Purpose: Used for general output to the console.
Stream: Outputs to the standard output stream (stdout).
Usage: Typically used for displaying information to the user.


clog (Standard Error Stream): >>>ERROR<<<
Purpose: Used for logging and debugging messages.
Stream: Outputs to the standard error stream (stderr).
Usage: Useful for logging errors, warnings, and other diagnostic information that should be separated from the regular output.*/