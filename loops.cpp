#include<iostream>
#include<array>

int main(){

    int arr[] = {1, 5, 8};
    std::array<int, 3> arr2{1, 5, 8};

    for(int i =0 ; i<arr2.size(); i++){
        std::cout << arr[i] <<  std::endl; 
    }

    std::cout<< "Range based for loop" << std::endl;

    // range based for loops
    for(int element: arr2){             // You can have auto in place of int. It will determine the datatype automatically
        std::cout<< element << std::endl;
    }


    int count =3;
    while(count > 0){
        std::cout << count << std::endl;
        count--;
    }

    

    return 0;

}