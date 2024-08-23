#include <iostream>
#include<math.h>
using namespace std;

//! Prime or not
bool primeNum(int n){
    for(int i = 2; i < n; i++){
        if(n % 2 == 0){
            return false;
        }
    }
    return true;
}

//! Find Factorial
int factorial(int n){
    if(n <= 1){
        return 1;
    } else{
        return (n * factorial(n - 1));
    }
}




int calculateArmstrong(int n) {
    int temp = n;
    int sum = 0;
    int numDigits = 0;

    // Calculate the number of digits in n
    while (temp > 0) {
        numDigits++;
        temp /= 10;
    }

    temp = n; // Reset temp to the original number
    cout << numDigits;
    // Calculate the Armstrong sum
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, numDigits);
        temp /= 10;
    }

    return sum;
}



int main(){
    int n;
    cin >> n;

    // cout << primeNum(n);

    // cout << factorial(n);

    int ans =  calculateArmstrong(n);
    cout << ans;
    return 0;
}