// array

const myArr = [0, 1, 2, 3, 4, 5]
const myHeors = ["shaktiman", "naagraj"]

const myArr2 = new Array(1, 2, 3, 4)
// console.log(myArr[1]);

// Array methods

// myArr.push(6) // insert  at last index
// myArr.push(7)
// myArr.pop() // remove  from last index

// myArr.unshift(9)  // add element to the beginning of an array
// myArr.shift()    // remove first element in an array

// console.log(myArr.includes(9));    // check if a value is present or not
// console.log(myArr.indexOf(3));      // return the first occurrence position of a specified value

// const newArr = myArr.join()    // convert into string and join with a string (by default it joins using comma)



// console.log(myArr); 
// console.log( newArr); 


// slice, splice


// splice method - used to change the contents of an array by removing or replacing existing elements and/or adding new elements in place


// we can use splice to add new elements also
myArr.splice(2,0,22,44,55,66) //this will delete 0 element from 2 to 0 then insert new elements from 2.
console.log("A ", myArr);

const myn1 = myArr.slice(1, 3) // returns  a new arrray and does not affect the original one, but not including end index

console.log(myn1);
console.log("B ", myArr);


const myn2 = myArr.splice(1, 3) // removes the elements  and returns them in an array, actual array is changed
console.log("C ", myArr);
console.log(myn2);
