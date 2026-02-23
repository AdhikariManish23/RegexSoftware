// Condition & Loop Practice

// 1
// let n = 7;
// console.log(n % 2 === 0 ? "Even" : "Odd");

// 2
// let n = -5;
// if (n > 0) console.log("Positive");
// else if (n < 0) console.log("Negative");
// else console.log("Zero");

// 3
// for (let i = 2; i <= 100; i += 2) {
//   console.log(i);
// }

// 4
// let N = 10, sum = 0;
// for (let i = 1; i <= N; i++) sum += i;
// console.log(sum);

// 5
// let n = 15;
// console.log(n % 3 === 0 && n % 5 === 0);

// 6
// let a = 10, b = 20;
// console.log(a > b ? a : b);

// 7
// let age = 18;
// console.log(age >= 18 ? "Eligible" : "Not Eligible");

// 8
// let n = 12345, count = 0;
// while (n > 0) {
//   count++;
//   n = Math.floor(n / 10);
// }
// console.log(count);

// 9
// let n = 5;
// for (let i = 1; i <= 10; i++) {
//   console.log(`${n} x ${i} = ${n * i}`);
// }

// 10
// let a = 5, b = 10, c = 3;
// console.log(Math.max(a, b, c));

// 11
// let n = 123, rev = 0;
// while (n > 0) {
//   rev = rev * 10 + (n % 10);
//   n = Math.floor(n / 10);
// }
// console.log(rev);

// 12
// let num = 121, temp = num, rev = 0;
// while (temp > 0) {
//   rev = rev * 10 + (temp % 10);
//   temp = Math.floor(temp / 10);
// }
// console.log(num === rev ? "Palindrome" : "Not Palindrome");

// 13
// let n = 5, fact = 1;
// for (let i = 1; i <= n; i++) fact *= i;
// console.log(fact);


// 14
// let n = 7, isPrime = true;
// if (n <= 1) isPrime = false;
// for (let i = 2; i * i <= n; i++) {
//   if (n % i === 0) isPrime = false;
// }
// console.log(isPrime);

// 15
// for (let n = 2; n <= 100; n++) {
//   let prime = true;
//   for (let i = 2; i * i <= n; i++) {
//     if (n % i === 0) prime = false;
//   }
//   if (prime) console.log(n);
// }


// 16
// let n = 123, sum = 0;
// while (n > 0) {
//   sum += n % 10;
//   n = Math.floor(n / 10);
// }
// console.log(sum);
// 17
// let str = "hello", count = 0;
// for (let ch of str) {
//   if ("aeiouAEIOU".includes(ch)) count++;
// }
// console.log(count);

// 18
// let a = 12, b = 18;
// while (b !== 0) {
//   let temp = b;
//   b = a % b;
//   a = temp;
// }
// console.log(a);

// 19
// let a = 12, b = 18;
// let lcm = (a * b) / (function gcd(x, y) {
//   while (y) [x, y] = [y, x % y];
//   return x;
// })(a, b);
// console.log(lcm);


// 20
// let n = 5, a = 0, b = 1;
// for (let i = 1; i <= n; i++) {
//   console.log(a);
//   [a, b] = [b, a + b];
// }

// 21
// let n = 153, temp = n, sum = 0;
// while (temp > 0) {
//   let d = temp % 10;
//   sum += d ** 3;
//   temp = Math.floor(temp / 10);
// }
// console.log(sum === n);

// 22
// let n = 1234, even = 0, odd = 0;
// while (n > 0) {
//   let d = n % 10;
//   d % 2 === 0 ? even++ : odd++;
//   n = Math.floor(n / 10);
// }
// console.log(even, odd);

// 23
// let arr = [4, 2, 9, 1];
// console.log(Math.min(...arr));

// 24
// for (let i = 1; i <= 100; i++) {
//   if (i % 7 === 0) console.log(i);
// }

// 25
// for (let n = 1; n <= 1000; n++) {
//   let temp = n, sum = 0;
//   while (temp > 0) {
//     let d = temp % 10;
//     sum += d ** 3;
//     temp = Math.floor(temp / 10);
//   }
//   if (sum === n) console.log(n);
// }

// 26
// let password = "1234", attempts = 3;
// while (attempts > 0) {
//   let input = "1234"; // assume input
//   if (input === password) {
//     console.log("Login Success");
//     break;
//   }
//   attempts--;
// }


// 27
// let arr = [10, 20, 5, 15];
// let max = -Infinity, second = -Infinity;
// for (let n of arr) {
//   if (n > max) [second, max] = [max, n];
//   else if (n > second && n !== max) second = n;
// }
// console.log(second);


// 28
// let n = 28;
// for (let i = 2; i <= n; i++) {
//   while (n % i === 0) {
//     console.log(i);
//     n /= i;
//   }
// }

// 29
// let n = 112233;
// let freq = new Array(10).fill(0);
// while (n > 0) {
//   freq[n % 10]++;
//   n = Math.floor(n / 10);
// }
// console.log(freq);

// 30
// function fact(n) {
//   let f = 1;
//   for (let i = 1; i <= n; i++) f *= i;
//   return f;
// }

// let n = 145, temp = n, sum = 0;
// while (temp > 0) {
//   sum += fact(temp % 10);
//   temp = Math.floor(temp / 10);
// }
// console.log(sum === n);




