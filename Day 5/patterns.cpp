#include <iostream>
using namespace std;

int main(){

    //* Star Pattern

    int n;
    cin >> n;
    // for(int row = 0; row < n; row++){
    //     for(int col = 0; col < row + 1; col++){
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }

    //* Inverted Star Pattern
    // for(int row = 0; row < n; row ++){
    //     for(int col = 0; col < n - row; col++){
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }

    //* Number Patter
    // for(int row = 0; row < n; row++){
    //     for(int col = 0; col < row + 1; col++){
    //         cout << col + 1 << " ";
    //     }
    //     cout << endl;
    // }

    //* Alphabet Triangle Pattern
    for(int row = 0; row < n; row++){
    char ch = 'A';
        for(int col = 0; col < row; col++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }






    //* Square Pattern
    // int n;
    // cin >> n;
    // for(int row = 0; row < n; row = row + 1){
    //     for(int col = 0; col < 4; col = col + 1){
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }

    //* hollow square pattern
    // for(int row = 0; row < n; row = row + 1){
    //     for(int col = 0; col < n; col = col + 1){
    //         if(row == 0 || row == n -1){
    //             cout << " * ";
    //         }else{
    //             if(col == 0 || col == n - 1){
    //             cout << " * ";
    //         }else{
    //             cout << "   ";
    //         }
    //         }
    //     }
    //     cout << endl;
    // }

    //* Rectangle Pattern
    // for(int row = 0; row < n; row = row + 1){
    //     for(int col = 0; col < n + 2; col = col + 1){
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }

    


    return 0;
}