// Address of operator: Find actual addreess of the variable/function in the memeory.

#include<iostream>

void foo(){
   //  x=72;
}

int main(){

    int x= 43;
    float y=72;
    char a= 'a';
    signed char b = 'b';
    unsigned char c = 'c';


    std::cout << "x: " << &x << std::endl;
    std::cout << "y: " << &y << std::endl;
    std::cout << "a: " << (int*)&a << std::endl;    // used pointer here to fetch the address in hex
    std::cout << "b: " << (int*)&b << std::endl;
    std::cout << "foo: " << (int*)&foo << std::endl;

    return 0; 

}