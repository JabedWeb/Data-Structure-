//array elements

let array=[15,26,37,48,69];

//find the array element    
let find=48;

//init variable 
let i=0;
let count=0;

//find array element
let beg=0;

//last array element
let end=array.length-1;


let mid;
while(beg<=end) {
   //changing mid point avery loop
    mid= parseInt( (beg+end)/2);
   //condition check mid the the targeted value or not
    if(array[mid]==find){
        console.log("number found the position: " + (mid+1) );
        count++;
        break;
    }
    else if(array[mid]<find){

        beg=mid+1;
    }
    else{
        end=mid-1
    }


}
//position are found
if(count!=1){
    console.log("number is not found");
}
if (count!=1){
    console.log('');
}


jQuery(document).ready(function(){
        jQuery('.give-embed-receipt').css('background-image', 'url(https://maga.danysden.com/wp-content/uploads/2022/08/bg-form-donate-1-300x300-1.png)');
 });   

 By clicking "DONATE" I accept Go Fight Win <a href="https://maga.danysden.com/tearms-condition/">terms of use</a> and <a href="https://maga.danysden.com/privacy-policy/">privacy policy</a>