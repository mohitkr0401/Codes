const name = "hitesh"
const repoCount = 50

// console.log(name + repoCount + " Value");

console.log(`Hello my name is ${name} and my repo count is ${repoCount}`); // string  interpolation 

const gameName = new String('hitesh-hc-com')

// console.log(gameName[0]);
// console.log(gameName.__proto__);


// console.log(gameName.length);
// console.log(gameName.toUpperCase());
console.log(gameName.charAt(2));
console.log(gameName.indexOf('t'));

const newString = gameName.substring(0, 4) // does  not include the end index so it will give us till 3rd character only
console.log(newString);

const anotherString = gameName.slice(-13, 4) // can take  negative values as well
console.log(anotherString);

const newStringOne = "   hitesh    "
console.log(newStringOne);
console.log(newStringOne.trim()); // removes  spaces from both sides of the string

const url = "https://hitesh.com/hitesh%20choudhary"

console.log(url.replace('%20', '-')) // replace  a specific character with something else

console.log(url.includes('sundar')) // check  if the string contains this value or not

console.log(gameName.split('-'));  // split the string into an array based on a particular value-can  be used to split strings by space also and specify upto what length we have to split