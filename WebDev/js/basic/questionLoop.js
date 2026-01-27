// 7

// let age = 21
// if(age >= 18){
//     console.log("Eligible to vote");
// }
// else{
//     console.log("Not Eligible to Vote");
    
// }

// 8

// In JavaScript, division '/' always produces a floating-point number.
// let num = 4563;
// let count  = 0;
// while(num > 0){
//     num = Math.floor(num / 10);// if you dont use Math.floor it convert numer into more smaller value like 456.3
//     count++;
// }
// console.log("count is "+count);

// 9

// let x = 2
// for(let i = 1 ; i <= 10; i++){
//     let ans = 2*i;
//     console.log("2 * "+i+"  =  "+ans);  
// }

// 10

// let a = 100, b= 300, c = 150;
// if(a>b && a>c){
//     console.log("a is greater ");
// }
// else if(b>a && b>c){
//     console.log("b is greater ");
// }
// else{
//     console.log("c is greater");
    
// }

// 11 reverse

// let x = 123; 
// let ans = 0;
// while(x > 0){
//     let rem = x%10;
//     ans = (ans*10)+rem;
//     x = Math.floor(x/10); // x = (x-rem)/10
// }
// console.log(ans);


// 12

// let x = 12321;
// let i = x;
// let ans = 0;
// while(x > 0){
//     let rem = x%10;
//     ans = (ans*10)+rem;
//     x = Math.floor(x/10); //  or u can write this => x = (x-rem)/10 ||  x = parseInt(num/10)
// }
// if(ans === i){
//     console.log("Pallindrome");  
// }
// else{
//     console.log("Not a Pallindrome");   
// }

// 13

// let x = 5;
// let ans = 1;
// for(let i = 5; i > 0; i--){
//     ans *= i;
// }
// console.log(ans);


// 14

// let x = 25;
// let flag = true
// for(let i = 2; i*i < x; i++){
//     if(x%i == 0){
//         flag = false;
//     }
// }
// if(flag === true){
//     console.log("It's a prime Number ");
// }
// else{
//     console.log("not a prime Number ");
    
// }

// 15

// let m = 2;
// let n = 100;

// for(let i = 2; i <= n; i++){
//     let flag = true;
//     for(let j = 2; j*j <= i; j++){
//         if(i%j == 0){
//             flag = false;
//         }
//     }
//     if(flag == true){
//         console.log(i);
//     }
// }

// 16

// let x = 1233;
// let sum = 0;
// while(x > 0){
//     let rem = x%10;
//     sum = sum + rem;
//     x = (x-rem)/10 
// }
// console.log(sum);

// 17
// let st = "manish";
// let count = 0;
// for(let i = 0; i < st.length(); i++){
//     if(st[i] == 'a' || st[i] == 'e' || stt[i] == 'i' || stt[i] == 'o' || stt[i] == 'i')
// }


// 29

let num = 12121233

for(let i = 0; i <= 9; i++){
    let temp = num
    let count = 0
    while(temp > 0){
        let lastDigit = temp%10
        if(lastDigit == i){
            count++
        }
        temp = (temp-lastDigit)/10
    }
    if(count > 0){
        console.log(i," : ",count);
    }
}