// Functions:
    // Tip: if you do not have funtion declared before the main() loop, 
    //      try to sign the function on top. or declare on top. like this:



#include<iostream>

//  Function Declaration - 'Forward Declaration'
int add(int a, int b);

// Declarted and Defined
void print(){
    std::cout << "returns nothing" << std::endl;
}

int main(){
    std::cout << add(1,2) << std::endl;

    print();
    return 0;
}

int add (int a, int b){
    return a+b;
}