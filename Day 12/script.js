const cardContainer = document.querySelector('.cards');

let API_URL = "https://fakestoreapi.com/products";

async function getProducts(){
    try{
        let data = await fetch(API_URL);
        let response = await data.json();

        response.forEach(element => {
            const card = document.querySelector('.card');
            const img = document.querySelector('.imagePro');
            const category = document.querySelector('.categoryPro');
            const price = document.querySelector('.pricePro');
            const rating = document.querySelector('.ratingPro');

            img.src = element.image;
            category.textContent = element.category;
            price.textContent = element.price;
            rating.textContent = element.rating.rate
            
            
        });
        console.log(response);
    }catch(err){
        console.log(err);
    }
}
getProducts();






// const cardContainer = document.querySelector('.cards');
// const API_URL = "https://fakestoreapi.com/products";

// async function getProducts() {
//     try {
//         // Fetching the product data from the FakeStore API
//         let data = await fetch(API_URL);
//         let products = await data.json();

//         // Loop through each product and create a card
//         products.forEach(product => {
//             // Clone the existing card structure
//             const cardTemplate = document.querySelector('.card').cloneNode(true);

//             // Update the card with the product data
//             cardTemplate.querySelector('img').src = product.image;
//             cardTemplate.querySelector('h1').textContent = product.category;
//             cardTemplate.querySelector('h2:nth-child(2)').textContent = `$${product.price}`;
//             cardTemplate.querySelector('h2:nth-child(3)').textContent = `Rating: ${product.rating.rate}`;

//             // Append the populated card to the container
//             cardContainer.appendChild(cardTemplate);
//         });

//         // Remove the initial empty card template
//         cardContainer.removeChild(cardContainer.querySelector('.card'));
//     } catch (err) {
//         console.log(err);
//     }
// }

// // Call the function to get and display products
// getProducts();
