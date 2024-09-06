#include<iostream>
using namespace std;
void diamondPattern(int num){
    int n = num / 2;
    for(int row = 0; row < n; row = row + 1){
        for(int col = 0; col < n - row - 1; col = col + 1){
            cout << " ";
        }
        for(int col = 0; col < row + 1; col = col + 1){
            cout << "* ";
        }
        cout << endl;
    }
     for(int row = 0; row < n; row = row + 1){
        for(int col = 0; col < row; col = col + 1){
            cout << " ";
        }
        for(int col = 0; col < n - row; col = col + 1){
            cout << "* ";
        }
        cout << endl;
    }

}

int main(){
    diamondPattern(10);
    return 0;
}