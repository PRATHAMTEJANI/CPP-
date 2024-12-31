#include <iostream>
#include <limits>

int main()
{
    std::cout << "data type range in c++ \n";
    // CHAR
    std::cout << "char : from " << int(std::numeric_limits<char>::min()) << " to " << int(std::numeric_limits<char>::max()) << "\n";
    std::cout << "unsgined char : from " << int(std::numeric_limits<unsigned char>::min()) << " to " << int(std::numeric_limits<unsigned char>::max()) << " \n ";

    // INT
    std::cout << "int : from " << int(std::numeric_limits<int>::min()) << " to " << int(std::numeric_limits<int>::max()) << "\n";
    std::cout << "unsigned int : from " << int(std::numeric_limits<int>::min()) << " to " << int(std::numeric_limits<int>::max()) << " \n ";

    // FLOAT
    std::cout << "float : from " << float(std::numeric_limits<float>::min()) << "to" << float(std::numeric_limits<float>::max()) << "\n";

    // short
    std::cout << "short : from " << int(std::numeric_limits<short>::min()) << "to " << int(std::numeric_limits<short>::max()) << " \n";
    std::cout << "unsgined short : from " << int(std::numeric_limits<unsigned short>::min()) << "to " << int(std::numeric_limits<unsigned short>::max()) << " \n";
    return 0;
}
// unsigned is always starts from 0.
// std::numeric_limits<type>::min() max()