// MAP

// Writing a function 
// 1
// const arr = [2,3,4,5];
// function double(x){
//     return x*2;
// }

// // console.log(arr);
// // console.log(arr.map(double));

// // 2
// const arr1 = [2,3,4,5]
// const output = arr1.map((x) => {return x*3});
// console.log(output);

// // 3 
// let arr2 = [2,3,4,5]
// const print = arr2.map(function binary(x){
//     return x.toString(2);
// })

// console.log(print);


// FILTER

// 1
const arr = [5,1,3,2,6]

// function isOdd(x){
//     return x%2
// }
// let output = arr.filter(isOdd)
// console.log(output);

// 2

// let output = arr.filter((x) => {
//     return x%2 == 0;
// })
// console.log(output);

// 3

// let output = arr.filter(function isEven(x){
//     return x%2==0;
// })
// console.log(output);


// REDUCE

// 1
// const numbers = [1, 2, 3, 4];
// const sum = numbers.reduce((acc, val) => acc + val, 0);
// console.log(sum); // 10

// 2 
// const numbers = [1, 2, 3, 4];
// const sum = numbers.reduce((acc, val) => {
//   console.log("acc:", acc, "val:", val);
//   return acc + val;
// }, 0);
// console.log(sum); // 10

// 3
function sumReducer(acc, val) {
  return acc + val;
}
const numbers = [1, 2, 3, 4];
const sum = numbers.reduce(sumReducer, 0);
console.log(sum); // 10

// 4
// const numbers = [1, 2, 3, 4];
// const sum = numbers.reduce(function(acc, val) {
//   return acc + val;
// }, 0);
// console.log(sum); // 10