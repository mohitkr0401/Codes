// console.log(2 > 1);
// console.log(2 >= 1);
// console.log(2 < 1);
// console.log(2 == 1);
// console.log(2 != 1);


// console.log("2" > 1);
// console.log("02" > 1);

console.log(null > 0); //converts null to 0 so it will compare 0>0 =>false
console.log(null == 0); // when  we use "==", JavaScript converts the null value to a zero (0) and then compares
console.log(null >= 0); // converts null to 0 so it will compare 0>=0=>true

console.log(undefined == 0);
console.log(undefined > 0);
console.log(undefined < 0);

// === 
// it is used for strict type checking i.e value and datatype will be checked.
// if any of the operand is not of same data type then comparison will result in false

console.log("2" === 2);  // false because of type difference, "2" is a string and 2 is number