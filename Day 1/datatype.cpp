#include<bits/stdc++.h>
using namespace std;

int main(){
    //! integer datatype - used to store whole numbers 
    int x;
    // cin >> x;
    // cout << x << endl;
    // cout << sizeof(x) << " byte"; // Memory Size

    //! float datatype - used to store decimal numbers with single prescision.
    // float pi = 36.1435463535659f;
    // cout << pi << endl;
    // cout << sizeof(pi) << " byte" << endl; // Memory Size

    //! double datatype - used to store decimal numbers with double presision.
    // double doubleValue = 3.1415926535;
    // cout << "Double value: " << doubleValue << endl;
    // cout << sizeof(doubleValue) << " byte"; // Memory Size

    //! long datatype
    // long tel = 1234567890;
    // cout << tel << endl;
    // cout << sizeof(tel) << " byte" << endl; // Memory Size

    //! long long datatype - 8
    // long long appId = 9223372036854775807;
    // cout << appId << endl;
    // cout << sizeof(appId) << " byte"; // Memory Size


    //! string datatype - to store string value in ""
    string teamName;
    cin >> teamName;
    cout << teamName << endl;
    cout << sizeof(teamName) << endl; // Memory Size

    // ! bool dataype - represents true or false
    bool isEven = true;
    bool isOdd = false;
    cout << isEven << endl;
    // * mainly used in if else statement


    //! char datatype - used to store single character value in ''.
    char ch;
    cin >> ch;
    char ch = 'a';
    cout << ch << endl;
    cout << sizeof(ch) << " byte"; // Memory Size
    return 0;
}























    // * 1st Way
    // string s1, s2;
    // cin >> s1 >> s2;
    // cout << s1 << " " << s2 << endl;

    // * 2nd Way
    // string str;
    // getline(cin, str);      //* getline internal function, two parameters (cin, str)
    // cout << str;
// ! for string use "", for char use ''