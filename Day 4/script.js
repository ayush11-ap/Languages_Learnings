//! - Promise is an Object it represent eventual completion of an async operation.
//!     - its status either be pending or fullfilled or rejected based on some condition.

const promise1 = new Promise(function(resolve, reject){
    setTimeout(() => {
        resolve("The Promise1 has been resolved");
    }, 5000)
})

const promise2 = new Promise(function(resolve, reject){
    setTimeout(() => {
        reject("The Promise2 has not been resolved");
    }, 3000)
})

const promise3 = new Promise(function(resolve, reject){
    setTimeout(() => {
        resolve("The Promise3 has been resolved");
    }, 500)
})

promise1.then((data) => {
    console.log(data);
});


//! Here all the promises should be resolved if any one of the promise is rejected it is not resolved
Promise.all([promise1, promise2, promise3]).then((data) => {
    console.log(data);
    
})

//* Whatever will be the first Promise would be resolved or reject it consider that Promise
Promise.race([promise1, promise2, promise3]).then((data) => {
    console.log(data);
    
})
