// Example of 'SIGABRT' error

#include <iostream>
using namespace std;

int main() {

    int arr[5] = {1, 2, 3, 4, 5};
  
    // SIGABRT error
    arr[6] = 6;
  
    return 0;
}
// read ERROR from course > module 1.aldo read tommorow.
// there are 5 typr of error in c++:
// 1.SIGFPE  2.SIGILL  3.SIGSEGV  4.SIGTERM  5.SIGABRT 6.SIGBUS. pleade read this tommorow.
    