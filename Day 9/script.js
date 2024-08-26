import axios from 'axios';
// const API_URL = "https://api.github.com/users/ayush11-dev";
// const API_URL = "https://fakestoreapi.com/products";
const API_URL = 'https://dummyjson.com/users';



//  1. then and catch
let getData = fetch(API_URL).then(res => res.json()).then(res => console.log(res));
// console.log(getData)

// 2 async await
async function getAPI(){
    let data = await fetch(API_URL);
    let response = await data.json();
    console.log(response);
}
// getAPI()

// 3 try catch
async function xyz(){
    try{
        let data = await fetch(API_URL);
    let res = await data.json();
    console.log(res);
    }catch(err){
        console.log(err);
    }
}
// xyz();


//!Axios library 
axios.get('https://dummyjson.com/users')
  .then(response => {
    console.log('Data:', response.data); 
  })
  .catch(error => {
    console.error('Error:', error); 
  });
    