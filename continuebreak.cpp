#include<iostream>

int main(){

    for(int x=0; x<10; x++){
        for(int i=0; i<10; i++){
            break;
            std::cout<< "start of the loop" << std::endl;
            std::cout<< i << std::endl;
        }
    std::cout<< "x is: " << x << std::endl;
    }
        return 0;
}