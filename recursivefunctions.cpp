#include<iostream>

int countdown (int n){
    // Base Case --  "Case when function stops recursing"
    if (n == 0){
        std::cout << "0... blast off!" << std::endl;
        return 0;
    }

    // Recursive Case
    std::cout << n << std::endl;
    return countdown(n-1);

}

int main(){

    countdown(5);
    return 0;
}