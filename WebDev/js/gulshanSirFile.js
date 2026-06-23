// console.log("hello javascript");
// console.log("hello js12");

// scope in js

// 1. global scope
// var a = 10;
// let b = 20;
// const c = 30;

// 2. function or local scope

// console.log(a);
// let a;
// a = 10


// abc()
// function abc() {
//     var a = 40
//     let b = 50
//     const c = 60

//     console.log(a);
//     console.log(b);
//     console.log(c);
// }

// console.log(a);
// console.log(b);
// console.log(c);

// 3. block scope

// {
//     var a = 40
//     let b = 50
//     const c = 60
// }

// {
//     // block code
// }

// console.log(a);
// console.log(b);
// console.log(c);

// mutate and immutate

// let obj = {
//     name: "abc",
//     age: 25
// }

// let obj1 = obj

// obj.name = "xyz"

// console.log(obj);
// console.log(obj1);



// let a = 10;
// let b = a;
// b = 20

// console.log(a);
// console.log(b);


// let obj = {
//     name: "abc",
//     age: 25
// }

// let obj1 = obj

// obj1.name = "xyz"

// console.log(obj);
// console.log(obj1);

// data type in js

// 1. primative type

// 1.1.  Number

// let a = 10
// let b = 2.5
// console.log(typeof a);
// console.log(typeof b);

// 1.2. String

// let a = '123'

// console.log(typeof a);

// let str = 'hello js'
// str[0] = "g"
// console.log(str);
// let name = "fdsfhsdfhkjd"
// let str = 'hello'
// let str1 = 'js '
// let str2 = `hello ${name}`
// console.log(str2);

// 1.3. boolean

// true
// false

// let a = false
// console.log(typeof a);

// conditions based
// let isLoggedIn = ""

// if (isLoggedIn) {
//     console.log("user logged in successfully"); // true
// } else {
//     console.log("user logged in first"); // false
// }

// interview question

// falsy value or truly value
// falsy value: -  false, 0, "",null,undefined , NaN
// truly value :- without falsy value

// 1.4. undefined

// let a;
// console.log(a);
// console.log(typeof a);

// 1.5. null

// let a = null;
// console.log(typeof a);

// 1.6. bigInt

// let a = 10n
// let b = 20
// console.log(a - b);
// let b = 10n;
// console.log(a + b);
// console.log(typeof big);


// 1.7. symbol

// let a = Symbol("123")
// let b = Symbol("123")
//  let a = 10;
// let b = 10;
// console.log(a === b);

// let id = Symbol("id")

// let obj = {
//     [id]: 101,
//     name: "abc",
//     id: 102,
// }


// 2. non primative
// 2.1. object  :-  store key-value pair

// let obj = {} //empty object
// let obj = {
//     name: "abc",
//     age: 25
// }
// console.log(obj.name);
// console.log(obj["name"]);
// obj.email = "abc@gmail.com"  add
// obj.age = 30  //update
// obj.name = "xyz" // update
// delete obj.age
// console.log(obj);

// 2.2. array  :-  multiple value store in a single variable

// let a = [] // empty array
// let arr = [10, 20, 30, 40, 50, 60, 70, "a"]
// let arr1 = ["a", "b", "c", "d"]
// arr[0] = 80  //update
// arr[8] = "b"  // add
// console.log(arr.length);

// 2.3. function  :-  reusable block of code

// let a = 10
// let b = 20
// let c = a + b
// console.log(c);

// let a1 = 50
// let b1 = 30
// let c1 = a1 + b1
// console.log(c1);

// {
//     // block of code
// }

// define
// function add(a, b) {
//     let c = a + b
//     return c // function body
// }

// call(invoked)
// console.log(add(10, 20));
// console.log(add(50, 30));
// console.log(add(40, 20));


// operater in js:-

// 1. arithmetic operators

// let a = 5 + 6 // addition
// console.log(a);
// let a = 5 - 6 //  subtraction
// console.log(a);
// let a = 5 * 6 //  multiplication
// console.log(a);
// let a = 5 / 6 //  division
// console.log(a);
// let a = 10 % 3 //  modulus (remainder)
// console.log(a);
// let a = 2 ** 3 //  power
// console.log(a);


// 2. assignment operator

//  = , += , -= , *= , /=
// let a = 10;
// a += 5;
// console.log(a);

// 3. camparision operator

// ==(value), === (value & type), != , !== , < , > , <= , >=
// let a = 10
// let b = 10
// console.log(a == b);
// console.log(a === b);
// console.log(a !== b);
// console.log(a > b);
// console.log(a < b);
// console.log(a >= b);
// console.log(a <= b);


// 4. logical operator

//  and(&&) or (||) not (!)
// let a = 10
// console.log(10 < 20 && 10 > 15 && 10 == 10);
// console.log(a < 20 || a > 15);
// console.log(!a);
// console.log(!(10 < 20 || a > 15));
// console.log(!(a < 20 && a > 15 && a == 10));

// 5. ternary operation (? :) if-else
// let a = 10;
// (a > 15) ? console.log("true case") : console.log("false case");


// like if-else

// if (a > 5) {
//     console.log("true"); // true statement /case
// } else {
//     console.log("false"); // false statement/ case
// }

// 6. unary operator  or  decrement/ increment operator

// ++ , --
// let a = 10
// console.log(a++ + ++a);
// console.log(a-- + --a);


// 7. type operator

// typeof

// let a = 10
//let b = "10"
// console.log(typeof a);
// console.log(typeof b)

// 8. bitwise operator

// 8.1. and operator(&) // return 1 if both bits are 1
// console.log(5 & 1); // 1
// console.log(5 & 2); // 0


// 8.2. or operator(|) // return 1 if any bits are 1

// console.log(5 | 1);
// console.log(5 | 2);

// 8.3.  XOR  operator( ^ ) // return 1 if bits are diff.

// console.log(5 ^ 2);
// console.log(5 ^ 3);

// 8.4. not operator (~)  swap all bits (0 -> 1  , 1 -> 0)

// console.log(~32);
// console.log(~-5);

// 8.5.  left shift ( << )

// console.log(5 << 1);

// 8.6. right shift ( << )

// console.log(5 >> 1);


// condition in js

// 1. if

// let a = 10;
// if (a === 5) {
//     console.log("hiii");
// }

// 2. if-else

// let a = 10;
// if (a < 5) {
//     console.log("hiii");
// } else {
//     console.log("hello");
// }

// 3. if-else-if

// let a = 10;
// if (a > 5) {
//     console.log("hiii");
// } else if (a == 10) {
//     console.log("hello");
// } else {
//     console.log("js");
// }

// 4. nested if

// let x = Number(prompt("enter a number"))
// console.log(typeof a);

// let x = 10;

// if (x) {
//     console.log("first");
// } else {
//     console.log("second");
// }

// let email = "abc@email.com";
// let password = "system@12"

// if (email == "abc@email1.com") {
//     if (password == "system@123") {
//         console.log("login successfully");
//     } else {
//         console.log("password worng");
//     }
// } else {
//     console.log("wrong email");
// }


// 5. switch

// let marks = 60
// switch (true) {
//     case (marks >= 90):
//         console.log("A");
//     // break;
//     case (marks > 75 && marks < 90):
//         console.log("B");
//     // break;
//     case (marks > 60 && marks <= 75):
//         console.log("C");
//     // break;
//     case (marks > 40 && marks <= 60):
//         console.log("D");
//     // break;
//     default: console.log("Fails");
// }


// loops in js

// 1. for

// for (let i = 0; i <= 10; i++) {
//     console.log(i);
// }


// 2. while

// let i = 1;
// while (i <= 10) {
//     console.log(i);
//     i++
// }

// 3. do-while
// let i = 1
// do {
//     console.log(i);
//     i++
// } while (i <= 10)


// console.log(`${i} number`);
// console.log(i, "is even");
// console.log(i + " is even");


// let num = 123
// let sum = 0
// while (num > 0) {
//     let digit = num % 10
//     sum += digit;
//     // num = (num - digit) / 10
//     num = parseInt(num / 10)
// }
// console.log(sum);


// ** function

// 1. function decleration
// function abc(a, b = 10) {
//     let c = a + b
//     return c
// }
// console.log(abc(5, 6));
// let a = 10
// a = 6


// 2. expression function
// let a = function (a, b) {
//     let c = a + b
//     return c
// }
// console.log(a(10, 20));

// *** practice problem example

// function abc(a) {
//     let num = a
//     let count = 0
//     while (num > 0) {
//         count += 1
//         let digit = num % 10;
//         num = (num - digit) / 10;
//     }
//     return count
// }

// console.log(abc(254645555));

// let num = 12121233
// for (let i = 0; i <= 9; i++) {
//     let temp = num
//     let count = 0
//     while (temp > 0) {
//         let lastDigit = temp % 10
//         if (lastDigit == i) {
//             count++
//         }
//         temp = (temp - lastDigit) / 10
//     }
//     if (count > 0) {
//         console.log(i, " : ", count);
//     }
// }

// let num = 845796
// let max = 0
// while (num > 0) {
//     let lastDigit = num % 10;

//     if (lastDigit > max) {
//         max = lastDigit
//     }
//     num = (num - lastDigit) / 10

// }

// let num = 845796
// let evenCount = 0
// let oddCount = 0
// while (num > 0) {
//     let lastDigit = num % 10;
//     if (lastDigit % 2 == 0) {
//         evenCount++
//     } else {
//         oddCount++
//     }
//     num = (num - lastDigit) / 10
// }
// console.log("evenCount", evenCount);
// console.log("oddCount", oddCount);

// let num = 845796
// let rev = 0
// while (num > 0) {
//     let lastDigit = num % 10;
//     rev = rev * 10 + lastDigit
//     num = (num - lastDigit) / 10
// }
// console.log(rev);

// ** take input in terminal

// const readline = require("readline");
// const rl = readline.createInterface({
//     input: process.stdin,
//     output: process.stdout,
// });
// rl.question("Enter your name: ", (name) => {
//     console.log(name);
//     rl.question("Enter your age: ", (age) => {
//         console.log(age);
//         rl.close();
//     });
// });

// const prompt = require("prompt-sync")();
// const name = prompt("Enter your name: ");
// console.log(name);
// const age = prompt("Enter your age: ");
// console.log(age);



//*** number and maths methods in javascript

// 1. Number.isInteger : - Checks if value is an integer.

// console.log(Number.isInteger(10));
// console.log(Number.isInteger(10.55));
// console.log(Number.isInteger("10"));

// 2. Number.isNaN :- Strict NaN check (better than isNaN()).

// console.log(10 / "abc");
// console.log(NaN == NaN);
// console.log(NaN === NaN);
// console.log(Number.isNaN(NaN));
// console.log(Number.isNaN("NaN"));

// 3. Number.isFinite :- Checks finite number.

// console.log(Number.isFinite(10));
// console.log(Number.isFinite(-10));
// console.log(Number.isFinite(NaN));
// console.log(Number.isFinite(Infinity));
// console.log(Number.isFinite(-Infinity));
// console.log(Number.isFinite("abc"));


// 4. parseInt  : Converts string -> integer.

// console.log(parseInt("10"));
// console.log(parseInt(10));
// console.log(parseInt("10.55"));
// console.log(parseInt("10ab"));
// console.log(parseInt("ab10"));

// 5.  parseFloat :- Converts string -> float.

// console.log(parseFloat(10.55));
// console.log(parseFloat("10.55"));
// console.log(parseFloat("10.5kg"));


// 6. toFixed() :- Rounds a number to n decimal places (returns string).

// let a = 12.555

// console.log(a.toFixed());
// console.log(a.toFixed(1));
// console.log(a.toFixed(2));
// console.log(a.toFixed(3));
// console.log(a.toFixed(4));
// console.log(a.toFixed(5));

// 7. toPrecision :- Formats number to n total digits.

// let a = 12.555

// console.log(a.toPrecision(2));
// console.log(a.toPrecision(3));
// console.log(a.toPrecision(4));
// console.log(a.toPrecision(5));
// console.log(a.toPrecision(6));
// console.log(a.toPrecision(7));


// 8. toString()  :- Converts number to string.

// let a = 102
// let b = a.toString()
// console.log(typeof a);
// console.log(typeof b);
// console.log(a);

// Example swap two number
// let a = 8;
// let b = 5;
// a = a + b;
// a = a - b;
// b = a - b;
// console.log(a, b);


// 9.  Math.floor :-  always round down
// console.log(Math.floor(10.52));
// console.log(Math.floor(8.90));
// console.log(Math.floor(8.40));
// console.log(Math.floor(-8.40));

// 10. Math.ceil  :- always round up
// console.log(Math.ceil(10.52));
// console.log(Math.ceil(8.9));
// console.log(Math.ceil(-8.9));

// 11. Math.round :- Rounds to nearest integer.
// console.log(Math.round(10.5));
// console.log(Math.round(10.4));
// console.log(Math.round(8.9));
// console.log(Math.round(10.9));
// console.log(Math.round(8.6));
// console.log(Math.round(-8.6));

// 12. math.random (0-1):- Returns number between 0 and 1.
// console.log(Math.random());
// console.log(Math.random());
// console.log(Math.random());

// example :- 4-digit otp
// console.log(Math.random());
// console.log(Math.random() * 9000);
// console.log(1000 + Math.random() * 9000);
// console.log(Math.floor(1000 + Math.random() * 9000));

// *** convert string to number
// let a = Number("10")
// console.log(typeof a);
// let b = "10"
// console.log(typeof +b);

// 13. Math.trunc() : remove decimal digit
// console.log(Math.trunc(10.55));
// console.log(Math.trunc(-10.55));

// 14. Math.max() : return max. value
// console.log(Math.max(10, 20, 5, 18));
// console.log(Math.max(10, -20, 5, 18));


// 15. Math.min() : return min. value
// console.log(Math.min(10, 20, 5, 18));
// console.log(Math.min(10, -20, 5, 18));

// 16. math.pow : power cal.
// console.log(Math.pow(2, 3));
// console.log(Math.pow(3, 3));

// 17. math.sqrt : square root

// console.log(Math.sqrt(16));
// console.log(Math.sqrt(25));
// console.log(Math.sqrt(36));

// 18. math.cbrt : cube root

// console.log(Math.cbrt(8));
// console.log(Math.cbrt(64));
// console.log(Math.cbrt(125));


// convert number to string

// let a = 10
// let b = a.toString()
// let c = String(a)
// console.log(typeof a);
// console.log(typeof b);
// console.log(typeof c);


// math.sign:-
// console.log(Math.sign(-5));
// console.log(Math.sign(5));
// console.log(Math.sign(0));




// **** String and its methods

// let a = ""
// let a = ''
// let a = ``
// console.log(typeof a);


// template literal
// let b = `js`
// console.log(typeof b);

// let a = "javascript"
// let b = 'javascript'

// console.log(typeof a);
// console.log(typeof b);

// how to use string

// let a = 10;
// console.log("sum of two number a");
// console.log('sum of two number', a);
// console.log("sum of two number", a);
// console.log("sum of two number" + " " + a);
// console.log(`sum of two number ${a}`);

// convert number to string

// let a = 123456
// let b = a.toString()
// console.log(b.length);

// strings methods

// 1. length : to find the length of string

// let str = "javascript"
// let str = "hello"
// let str = "hello javascript"
// console.log(str.length);


// 2.String concat() :- add two or more string

// ** using concat methods
// let a = "hello"
// let b = "js"
// let c = a.concat(b)
// console.log(c);

// ** using + operator
// let a = "hello"
// let b = "js"
// let c = a + b
// console.log(c);

// ** use template literal example

// let a = "hello"
// let b = "js"
// console.log(`${a} ${b}`);

// *** case conversion

// 3.  toUpperCase()

// let a = "javascript"
// let b = a.toUpperCase()
// console.log(b);

// 4. toLowerCase()

// let a = "JAVASCRIPT"
// let b = a.toLowerCase()
// console.log(b);

// *** character assess methods

// 5. charAt() : return char. at  index

// let a = "javascript"
// console.log(a[5]);
// let b = a.charAt(5)
// console.log(b);
// let a = "javascript"
// console.log(a[8]);

// 6. at() : same as charat() but support negative number

// let a = "javascript"
// console.log(a.at(5));
// console.log(a.at(-2));

// *** Searching in string

// 7. indexOf(): left to right search

// let a = "hello js"
// let b = a.indexOf("l")
// console.log(b);

// 8. lastIndexOf(): right to left  search

// let a = "js jphello jpjs"

// let b = a.indexOf("a")
// let c = a.lastIndexOf("a")

// console.log(a.lastIndexOf("jp"));
// console.log(b);
// console.log(c);

// let a = "hellow javascript"
// let b = a.lastIndexOf('e')
// console.log(b);

// example:-
// print each character of a string using a loop
// let str = "hello javascript"
// let name = "hi naval";
// for (let x of name) {
//     process.stdout.write(x)
// }

// 9. includes()

// let a = "hello javascript"
// console.log(a.includes("Java"));  // true
// console.log(a.includes("script"));  //true
// console.log(a.includes("hello"));   // true
// console.log(a.includes("js"));  //  false
// console.log(a.includes("a"));  // true


// 10. startWith()

// let a = "hello javascript"
// console.log(a.startsWith("j")); //false
// console.log(a.startsWith("h"));  // true
// console.log(a.startsWith("hello")); //true
// console.log(a.startsWith("javascript"));  //false

// 11. endsWith()

// let a = "hello javascript"
// console.log(a.endsWith("t")); //true
// console.log(a.endsWith("h"));  //false
// console.log(a.endsWith("hello"));  // false
// console.log(a.endsWith("javascript")); // true


// ** replace

// 12. replace() : replace first match

// let a = "hello javascript"

// console.log(a.replace("hello", "radhe-radhe"));
// console.log(a.replace("h", "H"));
// console.log(a.replace("l", "o"));

// 13. replaceAll()

// let a = "hello javascripta"
// console.log(a.replaceAll("a", "A"));
// console.log(a.replaceAll("l", "L"));

// 14. trim(): remove space start and end

// let a = "     javascript     "

// console.log(a);
// console.log(a.trim());

// 15. trimStart():- remove space from start

// let a = "     javascript     "
// console.log(a);
// console.log(a.trimStart());


// 16. trimEnds(): remove space from end

// let a = "     javascript     "
// console.log(a);
// console.log(a.trimEnd());

// let a = "   a     javascript     b   "

// console.log(a.trim());
// console.log(a.trimStart());
// console.log(a.trimEnd());

// 17. repeat() :-

// let a = "js "
// console.log(a.repeat(5));


// 18. padStart() :-

// let a = "123"
// console.log(a.padStart(5, "0"));

// aaacc
// ccaaa

// 19. padEnd() :-

// // let a = "89"
// console.log(a.padEnd(5, "0"));

// 20. slice(startIndex, endIndex):= support negative indexing

// let a = "hello javascript"
// let b = a.slice(0, 4)
// console.log(b);
// let b = a.slice(5)
// console.log(b);
// let b = a.slice(-10, -6)
// console.log(b);

// 21. subString(start, end )

// let a = "hello javascript"
// let b = a.substring(0, 4)
// console.log(b);

// 22. substr(start,length)

// let a = "hello javascript"
// let b = a.substr(0, 10)
// console.log(b);
// console.log("javascript".at(-5));

// let a = "hello javascript"
// console.log(a.includes("hello"));
// console.log(a.includes("Hello"));
// console.log(a.includes("j"));

// 23. split() : convert string to array

// let str = "hello javascript"
// let b = str.split(" ")
// console.log(b);

// let str = "hello javascript"
// let b = str.split("")
// console.log(b);

// let str = "a-b-c-d-e"
// let b = str.split("-", 3)
// console.log(b);

// console.log("hello javascript");

// input and output methods

// console.log("hello javascript");
// alert("hello js")
// let a = prompt("enter your age")
// console.log(a);
// let a = confirm("are you 18+")
// console.log(a);


// *** function

// 1. function decleration ||  named function


// function abc() {
//     console.log("hello js");
// }
// abc()

// function abc(a, b) {
//     console.log(a, b);
// }
// abc(10, 20)

// function abc(a, b) {
//     return a + b
//     console.log("kjgffdsgkfdk");
// }
// console.log(abc(10, 20));

// let a = abc(10, 20)
// console.log(a);

// function abc(a, b) {
//     console.log(a, b);
// }
// abc(10)


// 2. function expression

// let c = "10"
// console.log(c);
// let a = function abc() {
//     console.log("hello jii");
// }
// a()

// let a = function () {
//     console.log("hello");
// }
// a()

// 3. default parameterize function

// function abc ( a,b = 10){
//     return a+b
// }

// console.log(abc(10));
// console.log(abc(20,30));

// 4. anonymous function

// function () {
//     console.log("hello");
// }

// 5. arrow function

// let abc = (a,b )=> a * b
// console.log(abc(10,20));

// let abc = a => a * a
// console.log(abc(10));

// let abc = (a,b)=> {
//     return a*b
// }
// console.log(abc(10,20));


// 6. IIFE

// (function () {
//     console.log("hello");
// })();

// 7. rest parameters function (...)

// function abc(...a) {
//     console.log(a);
// }

// abc(10, 20, 30, 40, 50)


// 8. callback function
// function abc() {
//     console.log("javascript");
// }

// function mno(xyz) {
//     console.log("hello");
//     xyz()
// }

// mno(abc)

// *************** ARRAY and its methods **********************

// let a = [] // empty array
// console.log(typeof a);


// create array using literal

// let arr = [10, 20, 30, 40, 50]
// let arr1 = [10, "20", null, undefined, "abc"]

// create array using new keyword

// let arr2 = new Array()
// console.log(typeof arr2);
// let arr = new Array()


// let arr = [10, 20, 30, 40, 50]
// // console.log(arr[1]);
// // console.log(arr.length);

// access an Element in array using index

// arr[5] = 60
// console.log(arr);
// let arr = [10, 20, 30]
// arr[0] = 40 //modify
// console.log(arr);
// console.log(arr[0]);

// array properties

// 1. length :-  find length of an array

// let arr = [10, 20, 30, 40, 50]
// console.log(arr.length);


//  *** mutable methods: to modify orignal array

// 2. push: add element in last index

// let arr = [10, 20, 30, 40, 50]
// let arr1 = arr.push(60)
// console.log(arr);

// 3. unshift : add element in start index

// let arr = [10, 20, 30, 40, 50]
// let arr1 = arr.unshift(60)
// console.log(arr);

// 4. pop:  remove element last index

// let arr = [10, 20, 30, 40, 50]
// let arr1 = arr.pop()
// console.log(arr);

// 5. shift:  remove element start index

// let arr = [10, 20, 30, 40, 50]
// let arr1 = arr.shift()
// console.log(arr);


// 6. splice : add/remove element

// let arr = [10, 20, 30, 40, 50]
// let arr1 = arr.splice(0, 0, 80)
// console.log(arr);


// 7. slice(startindex, endindex) : extract  array

// let arr = [10, 20, 30, 40, 50]
// let arr1 = arr.slice(1, 3)
// console.log(arr1);
// console.log(arr);

// let arr = [10, 20, 30, 40, 50]
// let arr1 = arr.slice(-3, -1)
// console.log(arr1);
// console.log(arr);

// 8. sort

// let arr = [10, 8, 20, 15, 3, 4]
// let arr1 = arr.sort((a,b)=>a-b)
// console.log(arr);
// console.log(arr1);


// let arr = [10, 8, 20, 15, 3, 4]
// let arr1 = arr.sort((a, b) => a - b)
// console.log(arr);
// console.log(arr1);

//9.  tosorted

// let arr2 = [10, 8, 20, 15, 3, 4]
// let arr3 = arr2.toSorted((a, b) => a - b)
// console.log(arr2);
// console.log(arr3);

// 10. reverse

// let arr = [10, 8, 20, 15, 3, 4]
// let arr1 = arr.reverse()
// console.log(arr);

// 11. toReversed

// let arr = [10, 8, 20, 15, 3, 4]
// let arr1 = arr.toReversed()
// console.log(arr);
// console.log(arr1);

// 12. concat

// let arr = [10, 20, 30]
// let arr1 = [40, 50]
// let arr2 = arr.concat(arr1)
// console.log(arr);
// console.log(arr1);
// console.log(arr2);

// 13. indexOf

// let arr = [10, 20, 30, 40, 50]
// let arr1 = arr.indexOf(80)
// console.log(arr1);

// 14. lastIndexOf

// let arr = [10, 20, 30, 20, 50]
// let arr1 = arr.lastIndexOf(20)
// console.log(arr1);

// 15. includes

// let arr = [10, 20, 30, 40, 50]
// let arr1 = arr.includes(80)
// console.log(arr1);

// 16. find

// let arr = [10, 20, 30, 40, 50]
// let arr1 = arr.find((val) => val > 60)
// console.log(arr1);

// 17. findIndex

// let arr = [60, 20, 30, 40, 50]
// let arr1 = arr.findIndex((val) => val < 50)
// console.log(arr1);

// 18. findlast

// let arr = [60, 20, 30, 40, 10]
// let arr1 = arr.findLast((val) => val > 20)
// console.log(arr1);

// 19   findLastIndex

// let arr = [60, 20, 30, 40, 10]
// let arr1 = arr.findLastIndex((val) => val > 20)
// console.log(arr1);

// 20.  filter

// let arr = [60, 20, 30, 40, 10]
// let arr1 = arr.filter((val) => val > 80)
// console.log(arr1);

// 21. map

// let arr = [60, 20, 30, 40, 10]
// let arr1 = arr.map((a) => a * 2)
// console.log(arr1);

// let arr = [60, 20, 30, 40, 10]
// let arr1 = arr.map((a, b, c) => console.log(c))
// console.log(arr1);


// 22. flat()

// let arr = [10, [20, [30, [40, [50, [60, [70]]]]]]]
// let arr = [10, 20, [30, 40, 50]]
// let arr1 = arr.flat(Infinity)
// console.log(arr);
// console.log(arr1);


// 23. foreach

// let arr = [10, 20, 30, 40, 50, 55, 65]
// let arr2 = []
// let arr3 = []
// let arr1 = arr.forEach((val) => {
//     if (val % 2 == 0) {
//         return arr2.push(val)
//     } else {
//         return arr3.push(val)
//     }
// })
// console.log(arr2);
// console.log(arr3);


// 24. reduce

// arr.reduce(callback, initialValue)

// arr.reduce((acc, value, index, self) => {
// })

// let arr = ["a", "a", "b", "c", "d", "b", "c", "a"]
// let result = arr.reduce((acc, value, index, self) => {
//     console.log(acc, curr,)
// }, {})

// let arr = [10, 20, 30, 40, 50]
// let arr1 = arr.reduce((acc, curr, i) => console.log(acc, curr, i))

//1. example
// count frequency  using reduce
// let arr = ["a", "a", "b", "c", "d", "b", "c", "a"]
// let result = arr.reduce((acc, curr) => {
//     acc[curr] = (acc[curr] || 0) + 1
//     return acc
// }, {})
// console.log(result);

//2. example
// total sum of all element using reduce
// let arr = [10, 20, 30, 40, 50, 60]
// let result = arr.reduce((acc, curr) => acc + curr)
// console.log(result);

//3. example
// max value element of an array using reduce
// let arr = [70, 20, 80, 40, 50, 10]
// let result = arr.reduce((acc, curr) => {
//     return acc > curr ? acc : curr
// })
// console.log(result);

// 25. flatmap: map + flat

// let arr1 =  arr.map().flat()
// let arr = [10, 20, 30, 40, 50]
// let arr2 = arr.flatMap((val) => [val * 2])
// console.log(arr2);

// 26. Every()

// let arr = [10, 20, 30, 40]
// let arr1 = arr.every((val) => val > 5)
// console.log(arr1);

// 27. Some()

// let arr = [10, 20, 30, 40]
// let arr1 = arr.some((val) => val > 30)
// console.log(arr1);


// let arr = [10]
// console.log(Array.isArray(arr));

// using for loops

// let arr = [10, 20, 30, 40, 50]
// for (let i = 0; i < arr.length; i++) {
//     console.log(arr[i]);
// }
// console.log(arr1);

// using for..of (iteration on elements)

// let arr = [10, 20, 30, 40, 50]
// for (let abc of arr) {
//     console.log(abc);
// }

// using for..in (iteration on index)

// let arr = [10, 20, 30, 40, 50]
// for (let abc in arr){
//     console.log(abc);
// }



// ** rest parameter

// function anuj(...abc) {
//     console.log(abc);
// }
// anuj(10, 20, 30)


// function anuj(a, b) {
//     console.log(a, b);

// }
// anuj(10)


// ** spread operator

// function abc(...abc) {
//     console.log(abc);

// }

// let arr = [10, 20]
// abc(...arr)
// abc(10,20)


// let arr = [10, 20]
// let arr1 = [100, 200]
// let arr2 = [...arr, ...arr1]
// let arr2 = [10,20, 100,200]
// console.log(arr2);

// let arr = [10, 20, 30, 40]
// let arr1 = arr
// arr1[0] = 50
// console.log(arr);
// console.log(arr1);

// let arr = [10, 20, [30, 40]]
// let arr1 = [...arr]
// arr1[2][0]= 50
// console.log(arr);
// console.log(arr1);

// shallow copy

// let arr = [10, 20, 30]
// let arr1 = arr
// arr[0] = 40
// arr1[1] = 50
// console.log(arr);
// console.log(arr1);

// let arr2 = [10, 20]
// let arr3 = [...arr2]
// arr2[0] = 40
// arr3[2] = 50
// console.log(arr2);
// console.log(arr3);

// let arr = [10, 20, [30, 40]]
// let arr1 = [...arr]
// arr1[2][0] = 50
// console.log(arr);
// console.log(arr1);

// deep copy

// let arr = [10, 20, [30, 40]]
// let arr1 = arr  // assign hua hai arr1 ko kahi bhi change kro dono per reflect hoga
// arr1[2][0] = 50

// let arr1 = [...arr] // spread operator work only on in single Object
// arr1[0] = 50

// let arr1 = structuredClone(arr)  // DEEP Copy (with help of this we can change in nested loop)

// console.log(arr);
// console.log(arr1);


// ** destructuring

// let arr = [10, 20, 30, 40]
// let [a, b, ...abc] = arr
// console.log(a, b, abc);



// *** Object: key-value pair

// object creation

// 1. literal methods (basic)

// let obj = {
//     id: 1,
//     name: "anuj",
//     course: "mern stack"
// }

// 2. new Object

// let obj = new Object()

// obj.id = 1
// obj.name = "mukesh"
// obj.course = "mern Stack"

// console.log(obj);

// 3. constructor function

// function abc(id, name, course) {
//     this.id = id;
//     this.name = name;
//     this.course = course;
// }

// let obj = new abc(1, "mukesh", "mern stack")
// let obj1 = new abc(2, "suresh", "java full stack")
// console.log(obj);
// console.log(obj1);

// 4. class methods

// class abc {
//     constructor(id, name, course) {
//         this.id = id;
//         this.name = name;
//         this.course = course;
//     }
// }

// let obj = new abc(1, "mukesh", "mern stack")
// let obj1 = new abc(2, "suresh", "java fullstack")
// console.log(obj);
// console.log(obj1);

// access key

// let obj = {
//     id: 1,
//     name: "anuj",
//     course: "mern stack"
// }
// console.log(obj.name);
// console.log(obj["name"]);


// for (let key in obj) {
//     console.log(obj[key]);

// }

// add, update, delete

// let obj = {
//     id: 1,
//     name: "anuj",
//     course: "mern stack"
// }

// obj.role = "student" // add
// obj.name = "kuch bhi" //update
// delete obj.name //delete
// console.log(obj);


// let obj = {
//     id: 1,
//     name: "anuj",
//     course: "mern stack",
//     name: "mukesh",
// }
// console.log(obj);

// ******* nested object

// let obj = {
//     id: 1,
//     name: "anuj",
//     course: "mern stack",
//     address: {
//         city: "jaipur",
//         state: "raj"
//     }
// }

// // obj.address.city = "delhi"
// console.log(obj.address.city); // access nested key


// let obj1 = { ...obj } // shallow copy
// let obj2 = structuredClone(obj) // deep copy

// let obj = {
//     id: 1,
//     name: "anuj",
//     course: "mern stack",
// }

// console.log(obj.id, obj.name, obj.course);

// let { name } = obj
// console.log(name);
// let { id: studentId, ...rest } = obj
// console.log(studentId, rest);
//  let obj = {
//     id: 1,
//     name: "anuj",
//     course: "mern stack",
// address: {
//     city: "jaipur"
//     }
// }
// let obj1 = obj
// let obj1 = { ...obj }
// let obj1 = structuredClone(obj)
// obj1.id = 2
// obj1.address.city = "alwar"
// console.log(obj);
// console.log(obj1);

// let a = 10
// let b = a
// b = 20
// console.log(a);
// console.log(b);


// let obj = {
//     name: "mukesh",
//     abc: function (a, b) {
//         return a + b
//     }
// }

// console.log(obj.name); //properties
// console.log(obj.abc(1, 5)); // methods

// for..in

// let obj = {
//     id: 1,
//     name: "anuj",
//     course: "mern stack",
//     city: "jaipur"
// }
// for (let key in obj) {
//     console.log(key);
//     console.log(obj[key]);
// }



// 1. object.keys()

// let obj = {
//     id: 1,
//     name: "anuj",
//     course: "mern stack",
// }
// console.log(Object.keys(obj));
// let result = Object.keys(obj)
// let arr1 = result.forEach((val) => {
//     return val
// })
// console.log(arr1);

// ***  find object length

// let obj = {
//     id: 1,
//     name: "anuj",
//     course: "mern stack",
// }
// console.log(Object.keys(obj).length);


// 2. Object.value()

// let obj = {
//     id: 1,
//     name: "anuj",
//     course: "mern stack",
// }
// console.log(Object.values(obj));

// 3. object.entries


// let obj = {
//     id: 1,
//     name: "anuj",
//     course: "mern stack",
// }
// console.log(Object.entries(obj));
// let result = Object.entries(obj)

// // 4. object.fromEntries

// console.log(result);

// console.log(Object.fromEntries(result));


// 5. Object.freeze(): no add/ delete/update

// let obj = {
//     id: 1,
//     name: "anuj",
//     course: "mern stack",
// }

// Object.freeze(obj)

// obj.role ="student"
// obj.id= 5
// delete obj.course

// console.log(obj);

// 6. object.seal() : no add/ delete only update

// let obj = {
//     id: 1,
//     name: "anuj",
//     course: "mern stack",
// }

// Object.seal(obj)

// obj.role = "student"
// obj.id = 5
// delete obj.course
// console.log(obj);

// let obj = {
//     name: "xyz",
//     amount: 5000,

//     deposit: function (amt) {
//         return this.amount += amt
//     },
//     widhdwral: function (amt) {
//         return this.amount -= amt
//     },
// checkbalance:function (amt) {
//         return this.amount
//     },
// }

// console.log(obj.deposit(5000));
// console.log(obj.widhdwral(2000));


// 7. object.assign


// let obj = { name: "abc" }
// let obj1 = { id: 1 }

// // let obj2 = Object.assign(obj, obj1)
// let obj2 = Object.assign({}, obj, obj1)
// obj2.name = "amit"

// console.log(obj);
// console.log(obj1);
// console.log(obj2);

// 8. Object.hasOwn

// let obj = { name: "abc" }

// console.log(Object.hasOwn(obj, "name"));

//  9. in operator

// let obj = { name: "abc" }
// console.log("name" in obj);


// 10. Object.preventExtensions: prevent add

// let obj = {
//     name: "mukesh"
// }
// Object.preventExtensions(obj)
// obj.id = 1 // add not working
// obj.name = "amit" // update work
// delete obj.name  // delete working
// console.log(obj);

// 11 Object.isSealed

// let obj = {
//     name: "abc",
//     id: 1
// }

// Object.seal(obj)
// console.log(Object.isSealed(obj)); // check
// console.log(Object.isFrozen(obj));

// 12. Object.isFrozen

// let obj = {
//     name: "abc",
//     id: 1
// }

// Object.freeze(obj)
// console.log(Object.isFrozen(obj));
// console.log(Object.isSealed(obj));

// 13. Object.isExtensible

// false:- no add new properties in object
// true:- add new properties in object

// let obj = {
//     name: "abc"
// }
// Object.preventExtensions(obj)
// console.log(Object.isExtensible(obj));







// abc()

// // console.log(a)
// // var a = 10
// function abc() {
//     console.log("hiii");
// }

// a()
// var a = function () {
//     console.log("hello");
// }



// console.log(a);
// var a = 10
// function abc() {
//     console.log(b);
//     var b = 20
// }
// abc()


// *** nullish coalesicing operator (??): null / undefined

// let name = 1;
// let b = name ?? "Guest"
// console.log(b);


// let name = 5
// let b = name || "Guest"
// console.log(b);


// *** optional chaining (?)

// let obj = {
//     name: "abc"
// }
// console.log(obj?.address?.city ?? "city not found");



// ************* Asynchronous (example) ****************

// Asynchronous programming, on the other hand, allows multiple tasks to run independently of each other. In asynchronous code, a task can be initiated, and while waiting for it to complete, other tasks can proceed. This non-blocking nature helps improve performance and responsiveness, especially in web applications.


// 1.1 setTimeout(callback, delay)
// console.log("Hi");
// setTimeout(() => {
//     console.log("Geek");
// });
// console.log("End");

// 1.2
// let a = setTimeout(() => {
//     console.log("hello JS");  
// },2000);  // 1000 ms = 1second            
// clearTimeout(a); // it clear the timeOut and stop the setimeout function to execute 
// NOTE : agar hum yaha 0 sec ka delay bhi daale tb bhi yeah Sychronus k baad he chlega kyu ki isko event loop se travel krna pdega 

// 2 setInterval
// yeah ek particular interval k baad chlta rahega 
// let a =setInterval(()=>{
//     console.log("Namaste JavaScript");
    
// },1000);
// clearInterval(a);


// QUES : print 10 to 1
// let n = 10;
// let a = setInterval(() => {
//     if (n > 0) {
//         console.log(n);
//         n--;
//     } else {
//         clearInterval(a); 
//     }
// }, 1000);


// JSON (format)

// let obj1 = { // keys string mai hoti hai 
//     "name" : "manish",
//     "age" : 23
// }
// console.log(obj1);


// let obj = {  
//     name : "manish",
//     age : 23
// }
// console.log(JSON.stringify(obj)); // convert the Object into string

// ************************************* PROMISE *******************************

// Creation 1
// const promiseOne =new Promise (function(resolve,reject) {
//     setTimeout(function(){
//         console.log("Async Task Created1");
//         resolve();
//     },2000);
// })

// promiseOne.then(function(){
//     console.log("promise don1");
    
// })


// CREATION 2
// new Promise (function(resolve,reject) {
//     setTimeout(function(){
//         console.log("Async Task Created2");
//         resolve();
//     },2000);
// }).then(function(){
//     console.log("promise done2");
    
// })

// CREATION 3 (with this we can access any data that is come in promise )
// const promiseThree = new Promise(function(resolve,reject){
//     setTimeout(function(){
//         resolve("Namaste jii")
//     },1000)
// })

// promiseThree.then((user)=>{
//     console.log(user);
    
// })

// CREATION 4 (using reject)
// const promiseFour = new Promise(function(resolve,reject){
//     let a =false;
//     if(a){
//         resolve("Succesfully catch data")
//     }
//     else{
//         reject("ERROR")
//     }
// })
// promiseFour.then((resolve) =>{
//     console.log(resolve);
// }).catch((reject)=>{
//     console.log(reject);
    
// }).finally(()=>{
//     console.log("Work is Done");
    
// })


// CREATION 5 (using async and await)

// const promiseFive = new Promise(function(resolve,reject){
//     let a =true;
//     if(a){
//         resolve("Succesfully catch data")
//     }
//     else{
//         reject("ERROR: hogya jii")
//     }
// })

// async function consumedPromise() {
//     try {
//         const response = await promiseFive;
//         console.log(response);
        
//     } catch (error) {
//         console.log(error);
        
//     }
// }
// consumedPromise();


// API k sath async or await

// async function getAllUsers() {
//         try {
//             let response = await fetch('https://jsonplaceholder.typicode.com/todos/1')
//             let data = await response.json()
//             console.log(data);
            
//         } catch (error) {
//             console.log(error);
            
//         }
// }
// getAllUsers()

// Handling APIS Without async await

// fetch('https://jsonplaceholder.typicode.com/todos/1')
// .then((response)=>{
//     return response.json();
// })
// .then((data)=>{
//     console.log(data);
    
// })
// .catch((error) =>{
//     console.log(error);
    
// })


// Stages of Prmoises :

// 1 Pending
// 2 Fulfiled or Resolved
// 3 Rejected



// 1. Pending
// let a = new Promise(() => console.log()
// )
// console.log(a);

// 2. Fulfilled
// let a= new Promise((resolve,reject) => resolve("hello"))
// console.log(a);

// let a= new Promise((resolve,reject) => reject("error"))
// console.log(a);


// Promise Creation

// let a = new Promise((resolve,reject) => {
//     let b = false; // if there is ALL Ok in Promise it return resolve otherwise return reject
//     if(b){
//         resolve("Promise resolve")
//     }else{
//         reject("Promise Reject")
//     }
// })

// a.then((resolve) => console.log(resolve))      // then for resolve
//  .catch((result) =>console.log(result))     // catch for reject
// .finally(() =>console.log("Work Done"))         // status


// Methods

// 1. resolve() 

// Promise.resolve(5)
// .then((res) => console.log(res)
// )

// 2. reject()

// Promise.reject("error")
// .catch(err => console.log(err)
// )

// 3. Promis.all()  is used when you want to run multiple promises in parallel and wait until all of them finish successfully.  if one promise is reject its immediately fails and show the error

// let a = Promise.resolve(1)
// let b = Promise.resolve("chl gya")
// let c = Promise.reject("nhi chla na")
// // let c = Promise.reject(3)

// Promise.all([a,b,c]).then( res => console.log(res))
//         .catch(err => console.log(err))


// 4 Promise.allSettled() provide all status of promises

// let a = Promise.resolve(1)
// let b = Promise.resolve(2)
// let c = Promise.reject("error")
// // let c = Promise.reject(3)

// Promise.allSettled([a,b,c]).then( res => console.log(res))
//         .catch(err => console.log(err))


// 5 Promise.race() jo bhi promise pehle resolve ya reject hoga usko return kr dega

// let a = Promise.resolve(1)
// let b = Promise.resolve(2)
// let c = Promise.reject("error")
// // let c = Promise.reject(3)

// Promise.race([c,b,a]).then( res => console.log(res))
//         .catch(err => console.log(err))


// 6 Promise.any()  it finds 1st fullfilled resolve but if it finds all rejected then it return aggregate error

// let a = Promise.resolve(1)
// let b = Promise.resolve(2)
// let c = Promise.reject("error")
// // let c = Promise.reject(3)

// Promise.any([c,b,a]).then( res => console.log(res))
//         .catch(err => console.log(err))


// 7 Promise Chaining

// let a=new Promise((resolve,reject) => 
// {
//     let b=true;
//     if(b)
//     {
//         resolve("Promise resolve")
//     }
//     else{
//         reject("Promise reject")
//     }
// })

// a.then(() => console.log("step1"))
// a.then(()=>console.log("step2"))
// a.then(()=>console.log("step3"))
// .catch(()=>console.log("error"))

// let b = Promise.resolve(5)
// b.then((val) => val*2) // 5*2
// .then((res) => res*2)  // 10 *2
// .then((mno) => mno + 5) // 20 +5
// .then(data => console.log())  // 25


// closer 

// function outer()
// {
//     let a=10;
//     console.log("outer",a);
    
//   return  function inner()
//     {
//         console.log("inner",a);
//         a++;
        
//     }

// }

// let result=outer()

//     result()
//     result()
//     result()
//     result()



// await

// function getData()
// {
//     setTimeout(() => {
//         console.log("hello javascript");
        
//     }, 1000);
// }


// // async :- promise return karta hai

// async function abc() {
//     let result =await getData()
// }
// console.log(abc());


// Promise types 

// fetch('https://jsonplaceholderde.com/todos/1')
// .then(res=>res.json())
// .then(data=>console.log(data))
// .catch(err=>console.log(err))


// async type 


// async function abc() {
//     try{
//         let result=await fetch('https://jsonplaceholder.typicode.com/todos')
//         let upadteResult = await result.json()
//         console.log(upadteResult)
//     }
//     catch(err)
//     {
//         console.log(err);  
//     }
// }
// abc()



// throw method

// 1
// async function abc() {
//     let result = false;
//     try{
//         if(result){
//             throw new Error("this is Error");
//         }
//     }
//     catch (err){
        
//         console.log(err.message);
        
//     }
// }
// abc()

// 2
// function abc(){
//     return new Promise((res,rej) => {
//         throw new Error("create error");
//     })
// }

// abc().then(res=> console.log(res))
// .catch(err => console.log(err.message))


// Local Storage

// Local Storage is a Web Storage API in JavaScript that allows you to store data in the browser permanently (until manually deleted).
// Data stays even after:
// Page refresh 
// Browser restart 

// we can check output using HTML file
// NOTE : convert data into string and also save the name 

// let obj = {
//     name: "manish",
//     age: 35
// }
// localStorage.setItem("user",JSON.stringify(obj))

// let data = localStorage.getItem("user");
// console.log(JSON.parse(data));
// // output will show on browser terminal

// // TO remove single item 
// localStorage.removeItem("user")
// // and TO delete Complete local Storage
// localStorage.clear() 


// Session Storage
// Save form input
// sessionStorage.setItem("username", "Manish");

// // Get data
// let user = sessionStorage.getItem("username");
// console.log(user);

// cookies ??? 
// document.cookie = "user=Manish; max-age=3600";

// navigator

// if(!navigator.onLine){
//     alert("You are offline!");
// }

// // location

// let isLoggedIn = true;

// if(isLoggedIn){
//     location.href = "dashboard.html";
// }





// Ayushman Sir Task
// let obj  = {
//     name : "manish",
//     age : 25,
//     print: function(){
//         console.log(this.name);
        
//     },

//     print2: ()=>{
//         console.log(this.name);
//     }
// }

// obj.print();
// obj.print2();




