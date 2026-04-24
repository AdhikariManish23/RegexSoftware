// **************************** Function declaration *****************


// function abc(a,b){
//     console.log(a,b);
// }
// abc(10,23)

// function abcd(a,b = 10){
//     console.log(a,b);
    
// }
// abcd(2)


// ******************** Expression Function // Annonymus functions **************************

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

// function countDigit(b){
//     let count = 0;
//     while(b> 0){
//     count+=1;
//     let digit = b %10;
//     b = (b-digit) / 10;
// }
// return count;
// }

// console.log(countDigit(243232));


// ********************** Arrow Functions ********************************

// let abs = (a,b) => a*b
// console.log(abc(10,20));

// let abs = a => a*a
// console.log(abc(10));

// let abs = (a,b) => {
//   return a*b }
// console.log(abc(10,20));

// *****************IIFE (immediately invoke function express) *******************               

// (function () {
//     console.log("Hello");
    
// })();


// 7. rest parameter function or spread
// function abs(...a){
//     console.log(a);
    
// }
// abs(10,20,30,40)



//  *********************************** High Order Function ****************************************
// function greet(name){
//     return "Hello " + name;
// }

// function userInput1(callback){
//     return callback("this is example of HOF");
// }

// console.log(userInput1(greet));

// NOTE : here userInput is HOF because it takes another function as an argument or return a functions

// ************************************ Call back Function ***************************************

// function greet(name) {
//   return "Hello " + name;
// }

// function userInput2(callback) {
//   return callback("this is a example of callback");
// }

// console.log(userInput2(greet));

// NOTE : here greet is a callback functin because it is passsed to another function.


// ************************** Rest Operator *************************
// function test(...arguments){
//     console.log(arguments);
// }

// test(1,2,3,5,6,7,8);

// *************************** CURRYING *******************
// Currying converts a function with multiple arguments into multiple functions with one argument each.

function add(a) {
  return function(b) {
    return a + b;
  };
}

console.log(add(2)(3)); // 5