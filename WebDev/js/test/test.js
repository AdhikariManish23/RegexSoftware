// Question 1 :remove duplicates

// let arr = [1,2,3,3,4];

// Approach 1
// let output = arr.filter((value,index) =>{
//   return arr.indexOf(value) === index;
// })
// console.log(output);

// Approach 2
// const arr = [1, 2, 3, 3, 4];
// const unique = arr.reduce((acc, curr) => {
//   if (!acc.includes(curr)) {
//     acc.push(curr);
//   }
//   return acc;
// }, []);
// console.log(unique); 

// Question 2 : Count Vowel 


// let s = "hellojavascript";
// let count = 0;
// for(let i = 0; i < s.length; i++){
    

//     if (s[i] == 'a' || s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u'){
//         count++;
//     }
// }

// console.log(count);

//   async function printApi() {
//     try {
//         let resolve = await fetch('https://jsonplaceholder.typicode.com/users')
//         let data  = await resolve.json();
//         console.log(data);
//         // render(data);
//     } catch (error) {
//         console.log(error);
//     }
// }
// printApi();




// High Order Function / call back function / closure
// const nums = [1,2,3,4];
// const sum = nums.reduce((acc,curr) => {
//     return acc+curr;
// },0)
// console.log(sum);


// function a(name){
//     console.log("hello " + name);
    
// }
// function b(callback){
//     const name = "Manish";
//     callback(name);
// }

// b(a);




// function outer() {
//   let count = 0;

//   function inner() {
//     count++;
//     console.log(count);
//   }

//   return inner;
// }

// const counter = outer();

// counter(); // 1
// counter(); // 2
// counter(); // 3