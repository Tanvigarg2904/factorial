#include <iostream>
using namespace std;
// Factorial to calculate the factorial of a number
int factorial(int n){
    if(n <=1){
        return 1;
    } else{
        return n*factorial(n-1);
    }
}

int main(){
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << number << " is " << factorial(number) << endl;
    }
    
    return 0;
}
