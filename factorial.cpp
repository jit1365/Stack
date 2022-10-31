#include<iostream>

using namespace std;

int factorial(int number){
    int factorial_of_number=0;
    if(number==0){
        return 1;
    }
    factorial_of_number=number*factorial(number-1);
    return factorial_of_number;
}

int main(){

    cout<<factorial(4);
    
    return 0;
}