//! Promise Api

const p1 = new Promise((reslove, reject) => {
    setTimeout(() => {
        reslove("Promise1 Resolve");
        // reject("Promise1 Fails");
    }, 3000);
})

const p2 = new Promise((reslove, reject) => {
    setTimeout(() => {
        // reslove("Promise2 Resolve");
        reject("Promise2 Fails");
    }, 1000);
})

const p3 = new Promise((reslove, reject) => {
    setTimeout(() => {
        reslove("Promise3 Resolve");
        // reject("Promise3 Fails");
    }, 200);
})

//* Promise.all() -> it will wait for all promises to them to finish if all promises are resolved, and if any one of the promise is rejected then it will not excute the reaming one's

// Promise.all([p1, p2, p3]).then((res) => {
//     console.log(res);
// }).catch((err) => {
//     console.log(err);
// })





//* Promise.allSettled() -> it will wait for all promises to settled(either res or rej), no error if any one promise is rejected, it will return the array of object

Promise.allSettled ([p1, p2, p3]).then((res) => {
    console.log(res);
}).catch((err) => {
    console.log(err);
});




// * Promise.race() -> it waits for the first promise to be settled and it will return the value of that promise only and after words the remaining promise is settled.
// Promise.race ([p1, p2, p3]).then((res) => {
//     console.log(res);
// }).catch((err) => {
//     console.error(err);
// });




//* Promise.any() -> it waits for first success only, in case all fails it collect all the error and gives the list of all error / aggregate error, it returns the array of rejected promise
// Promise.any ([p1, p2, p3]).then((res) => {
//     console.log(res);
// }).catch((err) => {
//     console.log(err);
//     console.log(err.errors);
    
// });