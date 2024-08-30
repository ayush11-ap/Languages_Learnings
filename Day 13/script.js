"use strict"
function x(){
    console.log(this);
}
x();

// this substition

let arr = [2, 4, 5, 6, 7, 8];

let target = 15;

for(let i = 0; i< arr.length; i++){
    for(let j = 1 + i; j < arr.length; j++){
        let sum = arr[i] + arr[j];

        if(sum == target){
            console.log("index is " , i, j);
            
        }
    }
}