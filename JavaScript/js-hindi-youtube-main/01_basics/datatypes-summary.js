//  Primitive
//js is dynamically typed language because it converts the data type automatically

//  7 types : String, Number, Boolearn, null, undefined, Symbol, BigInt

const score = 100
const scoreValue = 100.3

const isLoggedIn = false // typeof => boolean
const outsideTemp = null  // typeof => object (null in js is like void* in c++)
let userEmail;            //typeof => undefined

const id = Symbol('123') // symbol typeeof => symbol
const anotherId = Symbol('123')

console.log(id === anotherId);

// const bigNumber = 3456543576654356754n //typeof =>bigint



// Reference (Non primitive)

// Array, Objects, Functions

const heros = ["shaktiman", "naagraj", "doga"];
let myObj = {
    name: "hitesh",
    age: 22,
} // typeof=>object

const myFunction = function(){
    console.log("Hello world");
} // typeof => function object

console.log(typeof anotherId);

// https://262.ecma-international.org/5.1/#sec-11.4.3

// //datatypes are based on memory allocation
// Primitive datatypes->  call by value (string,number,boolean,null,undefined,BigInt,symbol) ->Stack memory

// Reference/Non primitive data types -> call by reference ( array,object, function) -> heap memory

// JavaScript is a dynamically typed language. This means that you don't need to specify the data type of a variable when you declare it.

// explanation is in notes.