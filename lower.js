const prompt = require("prompt-sync")({ sigint: true });

// let data='A';
// console.log(data.toLowerCase());
// console.log(data.toUpperCase());


let int = prompt("input Data\n")

int.toLowerCase() ? console.log(int.toUpperCase()) : console.log(int.toLowerCase()) ;