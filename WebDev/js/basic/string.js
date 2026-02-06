// let a = 10;
// console.log("sum of string "+a);
// console.log(`sum of two number ${a}`);


// let w = 12345;
// let b = w.toString();
// console.log(b.length);

// # String Method

// 1. length : to find the length of string
// let str = "hello javascript"
// console.log(str.length); // 16

// 2. Concatenation
// let a = "hello"
// let b = " js"
// let x = a+b

// console.log(a.concat(b));

// console.log(a+b);
// console.log(x);
// console.log(`${a}${b}`);
// console.log(a,b);

// 3. toUpperCase()
// let a  = "javascript"
// console.log(a.toUpperCase());

// 4. toLowerCase()
// let a  = "MANISH"
// console.log(a.toLowerCase());

// 5. charAt() indexing start with 0
// let a  = "javascript"
// console.log(a[8]);

// let b = a.charAt(5)
// console.log(b);


// 6. indexOf() : left to right
// let a = "hello js"
// console.log(a.indexOf("l"));

// 7. lastIndexOf() : right to left
// let a = "hello js"
// console.log(a.indexOf("l"));
// console.log(a.lastIndexOf("hello"));

// 8 includes()
// let a = "hello javascript";
// console.log(a.includes("hello"));
// console.log(a.includes("js"));
// console.log(a.includes("j"));
// console.log(a.includes("java"));


// 9 startWith()
// let a = "hello javascript"
// console.log(a.startsWith("j"));
// console.log(a.startsWith("hello"));
// console.log(a.startsWith("h"));
// console.log(a.startsWith("javascript"));

// 10 endsWith()
// let s = "hello javascript"
// console.log(s.endsWith("j"));
// console.log(s.endsWith("t"));
// console.log(s.endsWith("javascript"));

// 11 replace
// let a = "hello javascript"
// console.log(a.replace("hello", "namaste"));
// console.log(a.replace("e", "@"));

// 12 replaceAll()
// let s = "hello elephant"
// console.log(s.replaceAll("e", "^"));

// 13 trim()
// let a = "    javascript    "
// console.log(a.trim());

// 14 trimStart()
// let a = "    javascript    "
// console.log(a.trimStart());

// 15 trimEnd()
// let b = "    javascript    "
// console.log(b.trimEnd());


// 16 repeat()
// let a = "js"
// console.log(a.repeat(3));

// 17 padStart()
// let a = "8"
// let b = "a"
// console.log(a.padStart(5,"7")); // 777778 
// console.log(b.padStart(4,"g")); // gggga


// 18 padEnd()
// let a = "8"
// let b = "a"
// console.log(a.padEnd(5,"7")); // 877777
// console.log(b.padEnd(4,"g")); // agggg

// 19 slice(start,end)
// let a = "hello javascript"
// console.log(a.slice(0,3)); // prints only the given range
// console.log(a.slice(6)); // it will remove the 6 index value from left side 
// console.log(a.slice(-3));  // it print 3 values from right side 

// 20 substring(start,end)
// let a = "hello javascript"
// console.log(a.substring(0,3)); // prints only the given range
// console.log(a.substring(6)); // it will remove the 6 index value from left side 
// console.log(a.substring(-3)); // subString not work on negative values

// 21 split()  it break and convert it into array
let str = "hello javascript";
let b = str.split(" ");
console.log(b);  // [ 'hello', 'javascript' ] return in array format



