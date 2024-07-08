// reduce continous adding ke liye use hota hain, like shopping cart bills and all
// reduce is a higher order function
// reduce is a method of array
// initial value ko bhejna pdhta hai (,) ke baad.....jo ek starting point deta hai



const myNums = [1, 2, 3]



// explain karne ke liye, with explicit return


// const myTotal = myNums.reduce(function (acc, currval) {
//     console.log(`acc: ${acc} and currval: ${currval}`);
//     return acc + currval
// }, 0)


// same chiz with arrow function , easy to understand

const myTotal = myNums.reduce( (acc, curr) => acc+curr, 0)

console.log(myTotal);


const shoppingCart = [
    {
        itemName: "js course",
        price: 2999
    },
    {
        itemName: "py course",
        price: 999
    },
    {
        itemName: "mobile dev course",
        price: 5999
    },
    {
        itemName: "data science course",
        price: 12999
    },
]

// abhi toh aise hi normally add kar diya, actual project ke time pr type checkimg bhi krni hogi, like string ya NAN na ho
// item.price isliye, taaki array of objects se key ki value le sake.

const priceToPay = shoppingCart.reduce((acc, item) => acc + item.price, 0)

console.log(priceToPay);