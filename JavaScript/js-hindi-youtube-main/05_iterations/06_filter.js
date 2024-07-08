// const coding = ["js", "ruby", "java", "python", "cpp"]


// const values = coding.forEach( (item) => {
//     //console.log(item);
//     return item
// } )

// forEach cannot return any value, kuch bhi krlo nhi krega uska mann nahi.

// console.log(values);

const myNums = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

// Filter is used to return the values, overcoming the problem of forEach.
// callback function mai value and condition deni hoti hai.(Mandatory) 

//const newNums = myNums.filter( (num) => num > 4)
// yeh implicit return hai, apne aap value return krega.

// const newNums = myNums.filter( (num) => {
//     return num > 4
// } )

// yeh explicit return hai, manually karni pdhegi return, because {} use karey hai.
// agar direct ya () use karke likha hota toh apne aap return kar deta.


// if same chiz forEach se karni hai toh, pehle empty array banao then loop mai condition laga ke value push kardo.
// const newNums = []

// myNums.forEach( (num) => {
//     if (num > 4) {
//         newNums.push(num)
//     }
// } )

// console.log(newNums);



// kaise actually handle krte hai filter ko real life example mai.

const books = [
    { title: 'Book One', genre: 'Fiction', publish: 1981, edition: 2004 },
    { title: 'Book Two', genre: 'Non-Fiction', publish: 1992, edition: 2008 },
    { title: 'Book Three', genre: 'History', publish: 1999, edition: 2007 },
    { title: 'Book Four', genre: 'Non-Fiction', publish: 1989, edition: 2010 },
    { title: 'Book Five', genre: 'Science', publish: 2009, edition: 2014 },
    { title: 'Book Six', genre: 'Fiction', publish: 1987, edition: 2010 },
    { title: 'Book Seven', genre: 'History', publish: 1986, edition: 1996 },
    { title: 'Book Eight', genre: 'Science', publish: 2011, edition: 2016 },
    { title: 'Book Nine', genre: 'Non-Fiction', publish: 1981, edition: 1989 },
  ];

  let userBooks = books.filter( (bk) => bk.genre === 'History')  // implicit retun ke sath

  userBooks = books.filter( (bk) => { 
    return bk.publish >= 1995 && bk.genre === "History"
}) // explicit return ke sath.
  console.log(userBooks);