//<...... number and maths methods in javascript.....>

// 1. Number.isInteger: - to check number is integer

// console.log(Number.isInteger(29));
// console.log(Number.isInteger(23.14));

// 2. Number.isNaN

//  console.log(Number.isNaN(NaN));
// console.log(Number.isNaN());

//  console.log(10/ "abc");
// console.log(10 / "5");
// console.log(10 + 20+ "5");

// console.log(NaN==NaN);
// console.log(NaN===NaN);

// 3. Number.isFinite
// console.log(Number.isFinite(10));
// console.log(Number.isFinite(-10));
// console.log(Number.isFinite(NaN));
// console.log(Number.isFinite(Infinity));
// console.log(Number.isFinite(-Infinity));
// console.log(Number.isFinite("abc"));

// 4. parseInt : string to Number
// console.log(parseInt("45"));
// console.log(parseInt(10));
// console.log(parseInt("10.67"));
// console.log(parseInt("10ab"));
// console.log(parseInt("20ab10"));

// 5.ParseFloat Number

// console.log(parseFloat(20.34));
// console.log(parseFloat("20.34anv"));

// console.log(parseFloat("45.066"));
// console.log(parseFloat(10));
// console.log(parseFloat("10.67"));
// console.log(parseFloat("10ab.98"));
// console.log(parseFloat("20ab10"));

// 6. toFixed():-roundof number and return string

// let a=12.555
// console.log(a.toFixed());
// console.log(a.toFixed(1));
// console.log(a.toFixed(2));
// console.log(a.toFixed(3));
// console.log(a.toFixed(4));
// console.log(a.toFixed(5));

// 7. toPrecision() :- to return how many number to output
// let b=14.666
// console.log(b.toPrecision(1));
// console.log(b.toPrecision(2));
// console.log(b.toPrecision(3));
// console.log(b.toPrecision(4));
// console.log(b.toPrecision(5));
// console.log(b.toPrecision(7));

// 8. toString():- Number -> String 
// let a=102
// console.log(typeof a);

// let b=a.toString()
// console.log(b);
// console.log(typeof b);

// for(let i=b.length;i>=0;i--)
// {
//     console.log(b[i]);    
// }



// <-----------Math Library------------>

// Math.floor -- always round down

// console.log(Math.floor(34.54)); // 34
// console.log(Math.floor(34.9)); // 34
// console.log(Math.floor(-34.9)); // 35
 
// // Math.round

// console.log(Math.round(3.8)); //4
// console.log(Math.round(34.87)); //35
// console.log(Math.round(34.29)); //34

// Math.ceil -- always round up

// console.log(Math.ceil(45.2)); // 46
// console.log(Math.ceil(45.49)); // 46
// console.log(Math.ceil(-45.49)); // 45

// Math.radom -- gives digit(0 to 1)
// console.log(Math.random());

//  QUESTION --- generate the OTP

// let x = Math.random()*10000;
// console.log(Math.floor(x));

console.log(Math.floor(Math.random() * 10));







