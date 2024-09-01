//array 
//refernece type
//how to create arrays


//ordered collection of items

// let array1 = ["Apple", "Mango", "Banana"];
// let array2 = [1,2,3,4,5];
// let array3 = ["Apple", 1, 7, 'hello'];

// console.log(array1);
// console.log(array2);
// console.log(array3);

// array1[1] = "Lemon";
// console.log(array1)
// //push
// array1.push("Orange");
// console.log(array1);


//pop
// let arr1 = array1.pop();
// console.log(array1);
// console.log(array1.pop());
// console.log(array1);
// console.log("Poped fruits", arr1);


//unshift
// array1.unshift("grapas", "Papyaa");
// console.log(array1);

//shift
// let arr2 = array1.shift();
// console.log(array1);
// console.log("shifted fruit", arr2);

//datatype
// let obj = {};
// console.log(typeof array1);
// console.log(typeof obj);
// console.log(Array.isArray(array1));
// console.log(Array.isArray(obj));


//Primtive vs reference data types
//Primtive
// let num1 = 6;
// let num2 = num1;
// console.log("value is num1 is ", num1);
// console.log("value is num1 is ", num2);
// num1++;
// console.log("value is num1 is ", num1);
// console.log("value is num1 is ", num2);

// //reference types
// let array1 = ["item1", "item2"];
// let array2 = array1;
// console.log("array1", array1);
// console.log("array2", array2);
// array1.push("item3");
// console.log("array1", array1);
// console.log("array2", array2);


// how to clone array
// how to concatenate two arrays

let array1 = ["item1", "item2"];
// let array2 = ["item1", "item2"];

// let array2 = array1.slice(0);
// let array2 = array1.slice(0).concat(["item3","item4"]);

// let array2 = [].concat(array1);
// let array2 = [].concat(array1, ["item3", "item4"]);


//new way
// Spread operator
// let array2 = [...array1];
// let onemorearray = ["item3", "item4"];
// let array2 = [...array1, "item3", "item4"];
// let array2 = [...array1, ...onemorearray];


// array1.push("item3");
// console.log(array1 === array2);
// console.log(array1);
// console.log(array2);

// use cont for creating array
// const fruits = ["apple", "mango"]; //0x11 address
// fruits = ["grapes", "pinrapple"]; error constant can't change
// fruits.push("banana");
// console.log(fruits);

//while loop using
const fruits = ["apple", "mango", "banana", "grapas"];
const fruits2 = [];

// let i = 0;
// while(i < fruits.length){
//     console.log(fruits[i]);
//     i++;
// }

//for of loop 
// for(let  furit of fruits){
//     console.log(furit);
// }

// for(let  furit of fruits){
//     fruits2.push(furit.toUpperCase());
// }

// console.log(fruits2);



//for in loop in array
// for(let index in fruits){
//     console.log(fruits[index]);
// }

// for(let i = 0; i < fruits.length; i++){
//     console.log(fruits[i]);
// }



// Array destructuring 
const myArray = ["value1", "Value2", "value3", "vlaue4"];
// let myvar1 = myArray[0];
// let myvar2 = myArray[1];
// console.log("value of myvar1", myvar1);
// console.log("value of myvar2", myvar2);

// let [myvar1, myvar2, myvar3] = myArray; //,skip this
// myvar1 = "value changed";
// let myNewArray = myArray.slice(2);
// console.log("value of myvar1", myvar1);
// console.log("value of myvar2", myvar2);
// console.log("value of myvar3", myvar3);
// console.log(myNewArray)



//object
//arrays are good but not sufficient
//for real world data
//object store key value pairs
//object don't have index

//how to create object

// const person = {name:"Nilesh",age:22};
// const person = {
//     name: "Nilesh",
//     age : 22,
//     hobbies: ["chess", "sleeping"]
// }
// console.log(person);

//how to access data from objects
// console.log(person["name"]);
// console.log(person["age"]);
// console.log(person.name);
// console.log(person.age);


// how to add key value pair to objects
// person["gender"] = "male";
// console.log(person);

//difference between dot and bracket notation
const person = {
    name: "Nilesh",
    age : 22,
    "person hobbies": ["chess", "sleeping"]
}

console.log(person["person hobbies"]);

// person.new = "hello";
console.log(person);