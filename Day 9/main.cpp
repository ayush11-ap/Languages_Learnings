#include <iostream>
using namespace std;

//! Greatest of three numbers
void GreatestOfThree(int a, int b, int c){
    if(a > b && a > c){
        cout << "The greatest number is : " << a << endl;
    }
    else if(b > a && b > c){
        cout << "The greatest number is : " << b << endl;
    }
    else{
        cout << "The greatest number is : " << c << endl;
    }
}

//! Prime in rangecd 
void primeRange(int num) {
    for (int i = 2; i < num; i++) {
        bool isPrime = true;

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << i << " ";
        }
    }
    cout << endl;
}
int main(){
    GreatestOfThree(42, 23, 42);

    int num = 50;
    cout << "Prime numbers less than " << num << " are: ";
    primeRange(num);
    return 0;
}