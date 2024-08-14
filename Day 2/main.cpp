#include <iostream>
using namespace std;

int main(){

    // int num;
    // cin >> num;
    // cout << num << endl;

    string str;
    cin >> str;     // includes only the first Word only
    cout << str << endl;

    string str1;
    getline(cin, str1);     // Includes all spaces and the whole string 
    cout << str1 << endl;
    return 0;
}