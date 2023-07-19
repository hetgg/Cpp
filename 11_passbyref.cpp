// Pass by reference 
// Benefits?:   Useful when we want to preserve the actual value without being mutates anywhere.

#include<iostream>

void Passbyvalue(int arg){
    arg = 999;
}

void Passbyreference(int& arg){
    arg = 999;
}


int main(){

    int x = 42;
    std::cout << "X's values is:  " << x <<  std::endl;
    std::cout << "X's add is:     " << &x <<  std::endl;
    // Call of the function
    Passbyvalue(x);
    //  Check x's value
    std::cout << "X's values is:  " << x <<  std::endl;
    std::cout << "X's add is:     " << &x <<  std::endl;

    return 0;
}