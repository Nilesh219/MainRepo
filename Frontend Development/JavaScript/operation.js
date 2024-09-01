
// if else condition

// let age = 17;

// if(age >= 18){
//     console.log("you can play adult game");
// }else{
//     console.log("You can play chliderns game");
// }

// // even and odd number
// let num = 7;
// if(num % 2 === 0){
//     console.log("even");
// }
// else{
//     console.log("odd");
// }

// truthy and falsy values

// falsy  value
// false
// ""
// null
// undefined
// 0

// truthy 
// "abc"
//  1, -1

// let fn1 = -1;
// // let fn = "";
// if(fn1){
//     console.log(fn1);
// }
// else{
//     console.log("fn is kinda empty");
// }



// let age = 8;
// let drink;

// if(age>=8){
//     drink = "coffee";
// }
// else{
//     drink = "milk";
// }
// console.log(drink);

// ternary operator 
// let age = 3;
// let drink = age >= 5 ? "coffee" : "milk";
// console.log(drink);

// and or operation 

// let fname = "Nilesh";
// let age1 = 18;

// if( fname[0] === "N" && age1 >= 18){
//     console.log("The start letter of name is N and age above age");
// }else{
//     console.log("inside else");
// }

// let fname = "Nilesh";
// let age1 = 20;

// if( fname[0] === "N" || age1 >= 18){
//     console.log("The start letter of name is N and age above age");
// }else{
//     console.log("inside else");
// }

//nested if else

// number guess
// let winnumber = 7;
// let userGuess = prompt("Guess a number");
// let userGuess = +prompt("Guess a number");

// console.log(typeof userGuess, userGuess);

// if(winnumber === userGuess){
//     console.log("Number guess is right");
// }
// else{
//     if(winnumber < userGuess){
//         console.log("numbere is low");
//     }
//     else{
//         console.log("number is high");
//     }
// }

//if
//else if 
//else if
//else if
//else

// let tempInDeg = 40;

// if(tempInDeg < 0){
//     console.log("Extremely cold outside");
// }
// else if(tempInDeg < 16){
//     console.log("It is cold outside");
// }
// else if(tempInDeg < 25){
//     console.log("Wheather is normal");
// }
// else if(tempInDeg < 35){
//     console.log("lets go for swim");
// }
// else if(tempInDeg < 45){
//     console.log("turn on AC");
// }
// else{
//     console.log("too hot!!!");
// }

// switch condition
let day = 7;

switch(day){
    case 1:
        console.log("Monday");
        break;

    case 2:
        console.log("Tuesday");
        break;

    case 3:
        console.log("Wednesday");
        break;

    case 4:
        console.log("Thursday");
        break;

    case 5:
        console.log("Friday");
        break;

    case 6:
        console.log("Satureday");
        break;
    
    default :
        console.log("Invaild Input");
        break;
    
}
