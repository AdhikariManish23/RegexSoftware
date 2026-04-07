// Question 1

// let arr = [10,20,30];
// let sum = 0;

// for(let i =0; i < arr.length; i++){
//     sum += arr[i];
// }

// console.log(sum);

// // Question 2

// let a = 10;
// let b = 20;

// a = a+b; // 30
// b = a-b; // 10
// a = a-b; // 20

// console.log(a,b);

// // Question 3 call an API and store it in a variable

// async function getData(){
//     try{
//         let response = await fetch('https://jsonplaceholder.typicode.com/users');
//         let data  = await response.json();

//         console.log(data);
//     }
//     catch(error){
//         console.log("error");
        
//     }
// }
// getData();

//  Q4 promise.race  (jo bhi pehle resolve hoga vo result mai execute hoga)
// let p1 = new Promise(resolve => {
//     setTimeout(() => resolve("First"),5000);
// });

// let p2 = new Promise(resolve => {
//     setTimeout(() => resolve ("second"),2000);
// });

// Promise.race([p1,p2]).then(result => console.log(result));

