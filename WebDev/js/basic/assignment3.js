// Practice Question on Maths and Number Methods or Operators

// 1

// let num = 10.5;
// if (Math.floor(num) === num) {
//     console.log("It is an integer");
// } else {
//     console.log("Not an integer");
// }

// 2

// let a = "123.45"
// let c = Number(a)
// console.log(c);
// console.log(typeof c);


// 3
// let a = NaN  // it is a number
// console.log(typeof a);

// console.log(isNaN("abc")); // true
// console.log(isNaN("123")); // false

// 4
// console.log(Math.round(4.7));

// 5
// console.log(Math.floor(4.2));
// console.log(Math.ceil(4.8));

// 6
// let a = 123.6473
// console.log(a.toFixed(2));

// 7
// let num = -25
// console.log(Math.abs(num));

// 8 (check number is Finite or Not)
// console.log(Number.isFinite(34));

// 9
// let a = 23;
// console.log(typeof a);

// let c = a.toString();
// console.log(typeof c);

// 10
// let a = 10
// let b = 20
// let c = 30
// console.log(Math.max(a,b,c));

// 11
// let a = 10
// let b = 20
// let c = 30
// console.log(Math.min(a,b,c));

// 12
// console.log(Math.random());

// 13
// console.log(Math.floor(Math.random()*10));

// 14
// function checkNumber(n) {
//     if (n > 0) return "Positive";
//     if (n < 0) return "Negative";
//     return "Zero";
// }

// 15
// let a = 23.76;
// console.log(Math.floor(a));

// function floatToInt(n) {
//     return Math.trunc(n); // removes decimal part
// }

//16
// function squareRoot(n) {
//     return Math.sqrt(n);
// }

//17
// function power(base, exp) {
//     return Math.pow(base, exp);
// }

// 18. Round to 2 decimal places
// let a  =123.3495
// console.log(a.toFixed(2));
// function roundTwoDecimals(n) {
//     return Number(n.toFixed(2));
// }

// 19. Random integer between 50 and 100
// function random50to100() {
//     return Math.floor(Math.random() * 51) + 50;
// }

// 20. Calculate the ceil and floor difference of a number
// let num = 4.7;

// let ceil = Math.ceil(num);
// let floor = Math.floor(num);

// let difference = ceil - floor;

// console.log("Ceil:", ceil);
// console.log("Floor:", floor);
// console.log("Difference:", difference);

// 21. Check whether a number is even or odd using Math.
// let num = 10;

// if (Math.abs(num % 2) === 0) {
//   console.log("Even");
// } else {
//   console.log("Odd");
// }

// 22. Find the sum of digits of a number.
// let num = 1234;
// let sum = 0;
// while (num > 0) {
//   sum += num % 10;
//   num = Math.floor(num / 10);
// }
// console.log(sum); // 10

// 23. Reverse a number using Number methods.
// let num = 1234;

// let reversed = Number(String(num).split("").reverse().join(""));
// console.log(reversed);

// 24. Check if a number is a palindrome.
// let num = 121;
// let reversed = Number(String(num).split("").reverse().join(""));

// if (num === reversed) {
//   console.log("Palindrome");
// } else {
//   console.log("Not Palindrome");
// }

// 25. Find the factorial of a number.
// let num = 5;
// let fact = 1;
// for (let i = 1; i <= num; i++) {
//   fact *= i;
// }
// console.log(fact); // 120

// 26. Check if a number is prime.
// let num = 17;
// let isPrime = true;
// if (num <= 1) isPrime = false;
// for (let i = 2; i <= Math.sqrt(num); i++) {
//   if (num % i === 0) {
//     isPrime = false;
//     break;
//   }
// }
// console.log(isPrime ? "Prime" : "Not Prime");

// 27. Find the GCD (HCF) of two numbers.
// function gcd(a, b) {
//   while (b !== 0) {
//     let temp = b;
//     b = a % b;
//     a = temp;
//   }
//   return a;
// }
// console.log(gcd(12, 18)); // 6

// 28. Find the LCM of two numbers.
// function gcd(a, b) {
//   while (b !== 0) {
//     let temp = b;
//     b = a % b;
//     a = temp;
//   }
//   return a;
// }
// function lcm(a, b) {
//   return (a * b) / gcd(a, b);
// }
// console.log(lcm(12, 18)); // 36


// 29. Truncate the decimal part of a number.
// let num = 4.987;
// console.log(Math.trunc(num));

// 30. Find the random OTP of 6 digit
// let otp = Math.floor(100000 + Math.random() * 900000);
// console.log(otp);

// 31. Check if a number is a perfect square.
// let num = 25;

// if (Number.isInteger(Math.sqrt(num))) {
//   console.log("Perfect Square");
// } else {
//   console.log("Not Perfect Square");
// }


// 32. Check if a number is an Armstrong number.
// let num = 153;
// let temp = num;
// let sum = 0;
// let digits = String(num).length;
// while (temp > 0) {
//   let digit = temp % 10;
//   sum += digit ** digits;
//   temp = Math.floor(temp / 10);
// }
// console.log(sum === num ? "Armstrong" : "Not Armstrong");

// 33. Find the maximum value of a safe integer in JavaScript.
// console.log(Number.MAX_SAFE_INTEGER);

// 34. Check if adding 0.1 + 0.2 equals 0.3 and explain why.
// console.log(0.1 + 0.2 === 0.3); // false
// console.log(0.1 + 0.2); // 0.30000000000000004

// 35. Find the sum of all prime numbers up to N.
// function isPrime(num) {
//   if (num <= 1) return false;
//   for (let i = 2; i <= Math.sqrt(num); i++) {
//     if (num % i === 0) return false;
//   }
//   return true;
// }

// function sumOfPrimes(n) {
//   let sum = 0;
//   for (let i = 2; i <= n; i++) {
//     if (isPrime(i)) sum += i;
//   }
//   return sum;
// }

// console.log(sumOfPrimes(10)); // 17 (2+3+5+7)
