let array=[15,26,37,48,69];
var prompt = require('prompt-sync')();

let name=prompt("Type name");

console.log(name);

let find=48;

let i=0;
for(i =0;i<array.length;i++) {

    if(array[i]==find) { 
        console.log("the find number is the position of " + (i+1));
        break;
    }
}

if(array.length==i) {
    console.log("not find any position");
}