const p = new Promise((res, rej) => {
    setTimeout(() => {
        res("Prmoise Resolved")
    }, 5000)
});


//! JS engine is not waiting  for promise to be resolved
function getData() {
    p.then((data) => console.log(data));
    
    console.log("Learning JavaScript");
    
}
getData()