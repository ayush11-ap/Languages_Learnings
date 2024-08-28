#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is prime
// bool PrimeCheck(int num) {
//     if (num <= 1) {
//         std::cout << "Enter a valid number" << std::endl;
//         return false;
//     }
//     bool isPrime = true;
//     for (int i = 2; i <= std::sqrt(num); i++) {
//         if (num % i == 0) {
//             isPrime = false;
//             break;
//         }
//     }
//     return isPrime;
// }

// // Function to print all prime numbers in a given range
// void PrimesInRange(int number) {
//     for (int i = 2; i < number; i++) {
//         bool res = PrimeCheck(i);
//         if (res) {
//             std::cout << i << std::endl;
//         }
//     }
// }

int factorial(int n){
    if( n <= 1){
        return 1;
    }else{
        return n * factorial(n - 1);
    }
}

// int binomial2(int r){
//     if( r <= 1){
//         return 1;
//     }else{
//         return r * binomial(r - 1);
//     }
// }

void printBinomial(){
    int n = 5;
    int r = 3;
    int ans = factorial(n)/(factorial(r) * factorial(n - r));
    cout << "Answer : " << ans << endl;
}


int main() {
    // int numberToCheck = 12; 
    // PrimesInRange(10);
    printBinomial();

    int n;
    int r;
    cout << "Enter a n value : " << endl;
    cin >> n;
    cout << "Enter a r value : " << endl;
    cin >> r;
    
    
    for(int i = 1; i <= n; i++){

    }
    // cout << binomial(n);
    


    return 0;
}
