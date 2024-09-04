#include <iostream>
using namespace std;
void invertedPyramid(int n){        //! Time complexity O(n^2) & space complexity O(1)
    for(int row = 0; row < n; row++){
        for(int col = 0; col < n-row; col++){
            cout << col+1;
        }
        cout << endl;
    }
}

void floydTriangle(int n){       //! Time complexity O(n^2) & space complexity O(1)
    int count = 1;       
    for(int row = 0; row < n; row++){
        for(int col = 0; col < row ; col++){
            cout << count;
            count++;
        }
        cout << endl;
    }
}

// * Binary Pattern using matrix 
void binaryPattern(int n){       //! Time complexity O(n^2) & space complexity O(1)
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i + 1; j++){
            if((i + j)% 2 == 0){
                cout << "1 ";

            }else{
                cout << "0 ";
            }
        }
        cout << endl;
    }
}

void solidRhombus(int n){
    for(int row = 0; row < n; row++){
        for(int col = 0; col < n - row; col++){
            cout << " ";
        }
        for(int col = 0; col < n ; col++){
            cout << "*";
        }
        cout << endl;
    }
}

void solidHollowRhombus(int n){
    for(int row = 0; row < n; row++){
        for(int col = 0; col < n - row; col++){
            cout << " ";
        }
        for(int col = 0; col < n ; col++){
            if(row == 0 || row == n - 1 || col == 0 || col == n - 1){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    // invertedPyramid(n);

    // floydTriangle(n);

    // binaryPattern(n);

    // solidRhombus(n);

    solidHollowRhombus(n);

    return 0;
}