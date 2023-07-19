#include<iostream>
#include<numeric>
#include<iterator>
#include<array>

int main(){

    int ids[100];
    // ModernC++
    // std::array<int, 100> ids; 

    for(int i=0; i<100; i++){
        ids[i] = i+1;
    }
    // ModernC++
    // std::iota(std::begin(ids), std::end(ids), 0);

    for(int i=0; i<100; i++){
        std::cout << ids[i] << std::endl;
        }
    return 0;
}
