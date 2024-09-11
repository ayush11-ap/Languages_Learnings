// * Space & Time Complexity


// function reverseString(str) {
//     let reversed = '';     //*O(1)
//     for (let i = str.length - 1; i >= 0; i--) {     //! O(n)
//         reversed += str[i];     //* O(1)
//     }
//     return reversed;
// }
// O(n + 1) =>  O(n)

// prototype
// function Student(name, rollNo, makrs){
//     this.name = name;
//     this.rollNo = rollNo;
//     this.makrs= makrs;
// }

// Student.prototype.getMarks = function(){
//     console.log(this.makrs);
    
// }

// let s1 = new Student("ayush", 11, 99);
// let s2 = new Student("piyush", 11, 89);

// console.log(s1);
// s1.getMarks();

// console.log(s2);



let name = "Ayush      ";

String.prototype.actualLength = function(){
    console.log(`Actual length is: ${this.trim().length}`);
}

name.actualLength()