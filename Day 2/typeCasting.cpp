#include <iostream>
using namespace std;

int main(){
    // ! Type Casting

    // ! Implicit Type Casting
    // * 1. int to float
    // int num1 = 10;
    // float num2 = 5.5;
    // float res = num1 + num2;
    // cout << "Implicit Type Casting " << res << endl;

    //* 2. char to int
    // char ch = 'a';  // ASCII value of a is 97
    // int a = ch + 1;     // 97 + 1
    // cout << a << endl;

    //* 3. int to char
    // int a = 97;
    // char ch = a;
    // cout << ch << endl;

    //! Explicit Type Casting
    //* 1 int to float
    // int num1 = 10;
    // float num2 = 5.5;
    // float res = num1 + (int)num2;
    // cout << res << endl;    //! behind the scene it's stored as 

    //* 2. double to int
    // double pi = 3.1415938;
    // int intPi = (int)pi;
    // cout << intPi << endl;

    //* 3. float to char
    // float floatingNum = 66.34;
    // char charVal = (char)floatingNum;
    // cout << charVal << endl;

    //* 4. int to float
    int a = 10;
    int b = 3.0;
    float c = a / b;
    cout << c << endl;
    return 0;
}