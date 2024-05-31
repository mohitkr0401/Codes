// singleton
// Object.create

// object literals

const mySym = Symbol("key1")


const JsUser = {
    name: "Hitesh",
    "full name": "Hitesh Choudhary",
    [mySym]: "mykey1", // [] should be used to use a symbol defined previously.
    age: 18,
    location: "Jaipur",
    email: "hitesh@google.com",
    isLoggedIn: false,
    lastLoginDays: ["Monday", "Saturday"]
}

// console.log(JsUser.email) //can be used 
// console.log(JsUser["email"]) // good practice should be used like this with "" 
// console.log(JsUser["full name"])
// console.log(JsUser[mySym]) // when using a symbol always use [] with the symbol name, cannot use JsUser.mySym

JsUser.email = "hitesh@chatgpt.com" // to change the value  
// Object.freeze(JsUser)
JsUser.email = "hitesh@microsoft.com" // no error will be generated but the value will not be changed
// console.log(JsUser);

JsUser.greeting = function(){
    console.log("Hello JS user");
}
JsUser.greetingTwo = function(){
    console.log(`Hello JS user, ${this.name}`);
}

console.log(JsUser.greeting());
console.log(JsUser.greetingTwo());