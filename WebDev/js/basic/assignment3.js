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
function checkNumber(n) {
    if (n > 0) return "Positive";
    if (n < 0) return "Negative";
    return "Zero";
}

// 15
// let a = 23.76;
// console.log(Math.floor(a));

// function floatToInt(n) {
//     return Math.trunc(n); // removes decimal part
// }

//16
function squareRoot(n) {
    return Math.sqrt(n);
}

//17
function power(base, exp) {
    return Math.pow(base, exp);
}

// 18. Round to 2 decimal places
let a  =123.3495
console.log(a.toFixed(2));
function roundTwoDecimals(n) {
    return Number(n.toFixed(2));
}

// 19. Random integer between 50 and 100
function random50to100() {
    return Math.floor(Math.random() * 51) + 50;
}


