/*  Async Await : async is a keyword that is used with a function & returns promise,
                await is a keyword that is used inside an async function,
                and it wait till the promise is resolve
*/

// ! async function - always returns a promise
async function getData(){
    return 'ASAN';
}

getData();  //* --> this will return a prmise























//! Async & Await r used to handle promises










// use of async await
// const p = new Promise((res, rej) => {
//     setTimeout(() => {
//         res("Prmoise Resolved")
//     }, 5000)
// });

// async function handlePromise() {
//     console.log("this is will be printed");
    
//     const val = await p;

//     console.log("Learning JavaScript");
    
//     console.log(val);


// }
// handlePromise();






























// *condition 2
// const val2 = await p;

// console.log("Learning JavaScript 2");

// console.log(val2);
