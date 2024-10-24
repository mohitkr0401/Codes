const fs = require('fs')

console.log(1);
console.log(2);
const result = fs.readFile('mytext.txt', 'utf-8', (err, data) => {
    if (err) {
        console.log(err);

    }
    else {
        console.log(data);
    }
})
console.log(result);
console.log(3);
console.log(4);




