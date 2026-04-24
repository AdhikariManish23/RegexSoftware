// 🔹 Rest Parameter vs Spread Operator (...)

// 👉 Both use the same syntax: ...
// 👉 But their purpose is completely different

// 🔸 1. Rest Parameter
// ✅ Definition (Interview-ready)

// 👉 The rest parameter collects multiple values into a single array

// 🔍 Syntax
// function func(...args) {
//   console.log(args);
// }
// 🔍 Example
// function sum(...numbers) {
//   return numbers.reduce((total, num) => total + num, 0);
// }

// sum(1, 2, 3, 4); // 10
// 🧠 What’s happening?

// 👉 All arguments are collected into:

// numbers = [1, 2, 3, 4]
⚠️ Rules (Important for interviews)
1. Must be last parameter
function test(a, ...rest) {} ✅
function test(...rest, a) {} ❌
2. Only one rest parameter allowed
function test(...a, ...b) {} ❌
💡 Use Cases
Variable number of arguments
Replacing arguments object
Clean functional programming
🔸 2. Spread Operator
✅ Definition (Interview-ready)

👉 The spread operator expands elements of an array/object into individual values

🔍 Arrays Example
const arr = [1, 2, 3];

console.log(...arr); // 1 2 3
🔍 Copying Arrays
const arr1 = [1, 2];
const arr2 = [...arr1];

console.log(arr2); // [1, 2]
🔍 Merging Arrays
const a = [1, 2];
const b = [3, 4];

const merged = [...a, ...b]; // [1, 2, 3, 4]
🔍 Objects Example
const obj1 = { name: "Aman" };
const obj2 = { age: 20 };

const merged = { ...obj1, ...obj2 };
🔍 Function Calls
function add(a, b, c) {
  return a + b + c;
}

const nums = [1, 2, 3];

add(...nums); // 6
🔥 Key Difference
Feature	Rest Parameter	Spread Operator
Purpose	Collect values	Expand values
Direction	Many → One	One → Many
Result	Array	Individual values
Usage	Function parameters	Arrays, objects, function calls
🧠 Easy Way to Remember

👉 Rest = Pack 📦
👉 Spread = Unpack 🎁

🔥 Combined Example (Very Important)
function test(a, b, ...rest) {
  console.log(a);     // 1
  console.log(b);     // 2
  console.log(rest);  // [3, 4, 5]
}

const arr = [1, 2, 3, 4, 5];

test(...arr);

👉 Here:

...arr → spread (unpacking)
...rest → rest (packing)
⚠️ Common Interview Traps
❌ Thinking both are same

👉 Same syntax, different purpose

❌ Shallow Copy Issue
const a = [{ x: 1 }];
const b = [...a];

b[0].x = 99;

console.log(a[0].x); // 99 😬

👉 Spread does shallow copy only

🎯 Final Interview Answer

👉 The rest parameter (...) collects multiple arguments into an array, while the spread operator (...) expands elements of arrays or objects into individual values.

💡 Real-world usage
React props (...props)
API data handling
Cloning & merging state