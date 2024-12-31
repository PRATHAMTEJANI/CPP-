#include <iostream>
#include <limits>

int main() {
    std::cout << "Data Type Ranges in C++:\n";
    
    std::cout << "char: from " << int(std::numeric_limits<char>::min()) << " to " << int(std::numeric_limits<char>::max()) << "\n";
    std::cout << "unsigned char: from " << int(std::numeric_limits<unsigned char>::min()) << " to " << int(std::numeric_limits<unsigned char>::max()) << "\n";
    std::cout << "short: from " << std::numeric_limits<short>::min() << " to " << std::numeric_limits<short>::max() << "\n";
    std::cout << "unsigned short: from " << std::numeric_limits<unsigned short>::min() << " to " << std::numeric_limits<unsigned short>::max() << "\n";
    std::cout << "int: from " << std::numeric_limits<int>::min() << " to " << std::numeric_limits<int>::max() << "\n";
    std::cout << "unsigned int: from " << std::numeric_limits<unsigned int>::min() << " to " << std::numeric_limits<unsigned int>::max() << "\n";
    std::cout << "long: from " << std::numeric_limits<long>::min() << " to " << std::numeric_limits<long>::max() << "\n";
    std::cout << "unsigned long: from " << std::numeric_limits<unsigned long>::min() << " to " << std::numeric_limits<unsigned long>::max() << "\n";
    std::cout << "long long: from " << std::numeric_limits<long long>::min() << " to " << std::numeric_limits<long long>::max() << "\n";
    std::cout << "unsigned long long: from " << std::numeric_limits<unsigned long long>::min() << " to " << std::numeric_limits<unsigned long long>::max() << "\n";
    std::cout << "float: from " << std::numeric_limits<float>::min() << " to " << std::numeric_limits<float>::max() << "\n";
    std::cout << "double: from " << std::numeric_limits<double>::min() << " to " << std::numeric_limits<double>::max() << "\n";
    std::cout << "long double: from " << std::numeric_limits<long double>::min() << " to " << std::numeric_limits<long double>::max() << "\n";

    return 0;
}   
// unsigned is always starts from 0