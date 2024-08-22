#include <iostream>
using namespace std;

void printName(){
    for(int i = 0; i < 3; i++){
        cout << "ASAN" << endl;
    }
}
int sum(int a, int b);


    // 
int main(){

    printName();
    int ans = sum(2, 11);
    cout << "Sum is : " << ans << endl;

    return 0;
}

int sum(int a, int b){
    int total = a + b;
    return total;
}