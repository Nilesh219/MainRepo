// while loop

// let i = 1;

// while(i <= 10){
//     console.log(i);
//     i++;
// }

//natural Number 1+2+3+4.....

// let i = 1;
// let total = 0;
// while(i <= 10){
//     total = total + i;
//     i++;
// }
// console.log(total);

// let n = 10;
// natural numbes fromula : n*(n+1)/2
// console.log(n*(n+1)/2);

//for loop

    //var
// for(let i = 1; i <= 10; i++){
//     console.log(i);
// }

//natural Number 1+2+3+4..... in for loop
// let n = 0;
// for(let i = 1; i <= 10; i++){
//     n = n + i;
// }
// console.log(n);


//break keyword

//continue keyword

// let i = 1;
// while(i <= 10){
//     if(i === 4){
//         break;
//     }
//   console.log(i);
//     i++;
// }

// for(let i = 1; i<= 10; i++){
//     if(i === 4){
//         continue;
//     }
//     console.log(i);
// }

//for loop in array
let fruits = ["Apple", "mango", "grapes", "banana"];

// console.log(fruits.length);
// console.log(fruits[2]);
//console.log(fruits[fruits.length-1]);

let furits2 = [];
for(let i = 0; i < fruits.length; i++){
    console.log(fruits[i].toUpperCase());
}

for(let i = 0; i < fruits.length; i++){
    furits2.push(fruits[i].toUpperCase());
}
console.log(furits2);




