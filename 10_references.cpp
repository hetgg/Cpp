// Referencing:    It is just another type to indicate another name of variabel.
//                 Which would have same address and same stored values. 

#include<iostream>

int main(){

    int x = 42;
    int& ref  = x;
    // "int&" is the full type, for a reference type

    std::cout << "x value is      :" << x << std::endl;
    std::cout << "x address is    :" << &x << std::endl;

    std::cout << "ref value is    :" << ref << std::endl;
    std::cout << "ref address is  :" << &ref << std::endl;

    return 0;
}