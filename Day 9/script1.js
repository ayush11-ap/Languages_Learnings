const API_URL = 'https://fakestoreapi.com/products';
import axios from 'axios'

fetch(API_URL)
.then(res => {
    return res.json();
})
.then(data => console.log(data))
.catch(err => console.log(err));



// 2. async await 
async function getAPI(){
    try{
        let data = await fetch(API_URL);
    let response = await data.json();
    console.log(response);
    }catch(err){
        console.log(err);
        
    }
}
// getAPI();

// 3. try catch

axios.get('https://fakestoreapi.com/products')
.then(res => {
    console.log(res.data);
})
.catch(err => {
    console.error('Error occurred:', err);
});