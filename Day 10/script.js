// const p1 = new Promise((res, rej) => {
//     setTimeout(() => {
//         let noerr = true;
//         if(noerr){
//             res({
//                 name:"Ayush", pass: 1234,
//             })
//         }else{
//             rej("Error in the code");
//         }
//     }, 1000);
// })

// async function resp(){
//     try{
//         let response = await p1;
//         console.log(response);
        
//     }catch(err){
//         console.error(err)
//     }
// }
// resp();

const btn = document.querySelector('.btn');
const inp = document.querySelector('input');
// const li = document.createElement('li')
const h1 = document.querySelector('.display')


let API_URL = "http://universities.hipolabs.com/search?name=";

async function getData(val){
    try{
        let data = await fetch(`${API_URL}${val}`);
    let response = await data.json();
    console.log(response)
    return response;
    }catch(err){
        console.error(err);
        return []
    }
    
}

btn.addEventListener('click', async () => {
    let val = inp.value;
    if(val.length === 0){
        h1.innerHTML = `<li>Invalid Country</li>`;
    }else{
        const data = await getData(val);
        displayData(data)
    }
})

function displayData(data){
    if(data.length === 0){
        h1.innerHTML = `<li>No Result !!</li>`;

    }
    else{
        h1.innerHTML = ``;
        data.forEach(val => {
            const li = document.createElement('li');
            // console.log(val.name);
            li.textContent = `${val.name} - ${val.country}`;
            h1.appendChild(li);
        })
    }
}

// let val;
// btn.addEventListener("click", () => {
//     getData();
//     val = inp.value;
// })

// function displayData(){
//     if(val.length === 0){
//         h1.innerHTML = `<li>Invalid Country</li>`;
//     }
//     else{
        
        
//     }
// }
// displayData()