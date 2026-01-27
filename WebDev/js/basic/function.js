// function declaration 
// function abc(a,b){
//     console.log(a,b);
// }
// abc(10,23)

// function abcd(a,b = 10){
//     console.log(a,b);
    
// }
// abcd(2)


// Expression Function // Annonymus functions
// let a  = function (a,b){
//     let c = a+b
//     return c
// }

// console.log(a(10,20));


// // example
// function evenOrOdd(a){
//     if(a%2 == 0){
//         console.log("Even");
        
//     }
//     else{
//         console.log("Odd");
        
//     }
// }

// evenOrOdd(7)

function countDigit(b){
    
    let count = 0;
    while(b> 0){
    count+=1;
    let digit = b %10;
    
    b = (b-digit) / 10;
    
}
return count;
}

console.log(countDigit(243232));


