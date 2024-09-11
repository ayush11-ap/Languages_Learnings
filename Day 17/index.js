function Book(title, author){
    this.title = title;
    this.author = author;
    this.isAvailable = true;

    this.borrowBook = function(){
        if(this.isAvailable){
            this.isAvailable = false;
            console.log(`${this.title} has been borrowed`);
        } else {
            console.log(`${this.title} is currently not available.`);
            
        }
    };
}

const book1 = new Book("Atomic Habits", "James Clear");
console.log(book1);
console.log(book1.isAvailable);
book1.borrowBook();
console.log(book1.isAvailable)
book1.borrowBook();

