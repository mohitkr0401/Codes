const marvel_heros = ["thor", "Ironman", "spiderman"]
const dc_heros = ["superman", "flash", "batman"]

// marvel_heros.push(dc_heros) // add array into array, nested arrays.

// console.log(marvel_heros);
// console.log(marvel_heros[3][1]);

// const allHeros = marvel_heros.concat(dc_heros) // add all arrays as string, no array in array
// console.log(allHeros);

const all_new_heros = [...marvel_heros, ...dc_heros] //new way to  add arrays

// console.log(all_new_heros);

const another_array = [1, 2, 3, [4, 5, 6], 7, [6, 7, [4, 5]]]

const real_another_array = another_array.flat(Infinity)
console.log(real_another_array);



console.log(Array.isArray("Hitesh")) // return in true or false
console.log(Array.from("Hitesh")) // to create an array from a string.
console.log(Array.from({name: "hitesh"})) // interesting // not specified so no value will be taken

let score1 = 100
let score2 = 200
let score3 = 300

console.log(Array.of(score1, score2, score3)); // to add value from multiple variables