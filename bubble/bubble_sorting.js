let n=6;

let array=[5,6,7,11,3,44];

for(let i=0;i<n-1;i++){
    for(let j=0;j<n-1;j++){
        if(array[j]>array[j+1]){
            let temp=array[j]
            array[j]=array[j+1]
            array[j+1]=temp
        }
    }
}

for(arr of array){
    console.log(arr);
}