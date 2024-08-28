//! process.argv in Node.js is an array that contains the command-line arguments passed when the Node.js process was started.
//* process.argv provides the path of C:// & D:// drive in the form of an array
console.log(process.argv[0]);


const readline = require('readline');

const rl = readline.createInterface({
    input:process.stdin,
    output:process.stdout,
})

rl.question("Who are a you", (ans) => {
    console.log(`I'm a ${ans}`);

    rl.question("Who is ur age", (age) => {
        console.log(`I'm a ${age}`);
        
        rl.close();
    })
    
})

