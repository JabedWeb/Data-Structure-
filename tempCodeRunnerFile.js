let prompt=require('prompt-sync');


let int = prompt("input Data\n")
console.log(int);
if (int.toLowerCase()) {

    console.log(int.toUpperCase());

}else if (int.toUpperCase()) {

    console.log(int.toLowerCase());

}else{
    return 'a'
}