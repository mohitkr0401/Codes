// Dates

let myDate = new Date()
// console.log(myDate.toString());
// console.log(myDate.toDateString());
// console.log(myDate.toLocaleString());
// console.log(typeof myDate);

// let myCreatedDate = new Date(2023, 0, 23)
// let myCreatedDate = new Date(2023, 0, 23, 5, 3)
// let myCreatedDate = new Date("2023-01-14")
let myCreatedDate = new Date("01-14-2023")
// console.log(myCreatedDate.toLocaleString());

let myTimeStamp = Date.now()

// console.log(myTimeStamp); // show  the timestamp in milliseconds
// console.log(myCreatedDate.getTime()); // show  the timestamp of created date
// console.log(Math.floor(Date.now()/1000)); // show  time in seconds not milliseconds

let newDate = new Date()
console.log(newDate);
console.log(newDate.getMonth() + 1); // to display month  from 0 - 11, +1 because  we need to get it from 1 -  12
console.log(newDate.getDay());


// `${newDate.getDay()} and the time `

newDate.toLocaleString('default', {
    weekday: "long",
    
})
// to modify  the language you can use this code, use ctl + space to see the  options that are available for your keyboard layout
