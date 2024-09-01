// console.log("Hello Fukers Fuck you");

// let boxes = document.getElementsByClassName("box");
let boxes = document.querySelector(".container").children;
console.log(boxes);

function getRandomColor(){
    let var1 = Math.ceil(0 + Math.random() * 255);
    let var2 = Math.ceil(0 + Math.random() * 255);
    let var3 = Math.ceil(0 + Math.random() * 255);
    return `rgb(${var1}, ${var2}, ${var3})`;
}

//arow function
Array.from(boxes).forEach(e =>{
    e.style.backgroundColor = getRandomColor();
    // e.style.color = getRandomColor();
})
