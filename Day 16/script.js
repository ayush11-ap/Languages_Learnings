function User(username, age, isLoggedIn){
    this.username = username;
    this.age = age;
    this.isLoggedIn = isLoggedIn;

    // return this;
}

const userOne = new User("Ayush", 19, true)
const userTwo = new User("nitesh", 19, false)

console.log(userOne);
console.log(userTwo.instanceOf(User));

