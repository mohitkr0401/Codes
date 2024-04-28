const score = 400
// console.log(score);

const balance = new Number(100)
// console.log(balance);

console.log(balance.toString().length);  // length of the number in string format
console.log(balance.toFixed(1)); // to show till what decimals on the screen 

const otherNumber = 123.8966

console.log(otherNumber.toPrecision(4)); // to display  all the numbers including decimal points upto given precision.

const hundreds = 1000000
console.log(hundreds.toLocaleString('en-IN')); // to  display in Indian format

// +++++++++++++ Maths +++++++++++++++++++++++++++++

// console.log(Math);
// console.log(Math.abs(-4));
// console.log(Math.round(4.6));
// console.log(Math.ceil(4.2));
// console.log(Math.floor(4.9));
// console.log(Math.min(4, 3, 6, 8));
// console.log(Math.max(4, 3, 6, 8));
// math functions used in js 

console.log(Math.random());    // gives random numbers between 0 and  1
console.log((Math.random()*10) + 1);      // gives random numbers between 1 and  10
console.log(Math.floor(Math.random()*10) + 1);      // gives random integer between 1 and   10

const min = 10
const max = 20

console.log(Math.floor(Math.random() * (max - min + 1)) + min) // **generates a random number between min and max, mostly used ******