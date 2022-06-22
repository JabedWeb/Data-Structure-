let array=[15,26,37,48,69];

let find=48;

let i=0;

let beg=0;
let count=0;
let end=array.length-1;
let mid;
while(beg<=end) {
   
    mid= parseInt( (beg+end)/2);
   
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

if(count!=1){
    console.log("number is not found");
}