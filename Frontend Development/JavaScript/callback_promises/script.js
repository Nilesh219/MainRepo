// Running numbers 1 2 3 4 it is Asynchronous
console.log("Nilesh is Hacker"); //1  Synchronous
console.log("Akash is Haecker"); //2

//after run
setTimeout(() => {
  //4  Asynchronous
  console.log("I am SetTimeout 1");
}, 0); //3000

setTimeout(() => {
  //4  Asynchronous
  console.log("I am SetTimeout 2");
}, 0); //3000

console.log("The End"); //3

const fn = () => {
  console.log("Nothing")
}


const callback = (arg, fn) => {
   console.log(arg);
   fn()
}


const loadScript = (src, callback) => {
  let sc = document.createElement("script");
  sc.src = src;
  sc.onload = callback("Nilesh", fn);
  document.head.append(sc);
};


loadScript("https://cdnjs.cloudflare.com/ajax/libs/prism/9000.0.1/components/prism-actionscript.min.js", callback);