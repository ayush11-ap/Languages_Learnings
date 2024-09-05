#include <iostream>
using namespace std;
void butterflyPattern(int n){
    for(int row = 0; row< n ; row++){
        // top-left 
        for(int col = 0; col < row + 1; col++){
            cout << "*";
        }

        // middel space
        for(int col = 0; col < 2*(n - row - 1); col++){
            cout << " ";
        }

        // top-right
        // top-left 
        for(int col = 0; col < row + 1; col++){
            cout << "*";
        }
        cout << endl;
    }

    for(int row = 0; row< n; row++){
        // top-left 
        for(int col = 0; col < n - row; col++){
            cout << "*";
        }

        // middel space
        for(int col = 0; col < 2* row ; col++){
            cout << " ";
        }

        // top-right
        // top-left 
        for(int col = 0; col < n - row; col++){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){

    butterflyPattern(5);

    return 0;
}