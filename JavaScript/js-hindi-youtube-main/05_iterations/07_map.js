const myNumers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

// same as filter but iterate every element, filter condition ke according karta hai......isme condition nhi hoti.

// const newNums = myNumers.map( (num) => { return num + 10})


//chaining....  multiple maps and filters ko ek sath use kar skte hai, sabko dot(.) se separate karke likhna hota hai
const newNums = myNumers
                .map((num) => num * 10 )
                .map( (num) => num + 1)
                .filter( (num) => num >= 40)

console.log(newNums);



// filter , true and false ke liye use hota.....condition ke hisab se return karta
// map, ek ek element ko iterate karta hai, aur usko modify karta hai, and sab kuch return karta