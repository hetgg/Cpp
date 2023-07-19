#include<iostream>

int main(){

    int x = 7;
    int* ptr = &x;

    
    std::cout << "x stores          :" << x << std::endl;
    std::cout << "x address         :" << &x << std::endl;

    std::cout << "ptr stores        :" << ptr << std::endl;
    std::cout << "ptr deference     :" << *ptr << std::endl;

    return 0;
}