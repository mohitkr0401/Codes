// Immediately Invoked Function Expressions (IIFE)

// global scope ke pollution se problem hoti hai toh use hatane ke liye use krte hai......immediately invoke krne ke liye.
(function chai(){
    // named IIFE
    console.log(`DB CONNECTED`);
})();

( (name) => {
    console.log(`DB CONNECTED TWO ${name}`);
} )('hitesh')

