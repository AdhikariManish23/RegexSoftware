// ⭐ 1. Transform array of objects
// const users = [
//   {name: "Rahul", age: 20},
//   {name: "Manish", age: 22}
// ];

// const result = users.map(user => ({
//   ...user,
//   isAdult: user.age >= 18
// }));
// ⭐ 2. Extract specific field
// const products = [
//   {id: 1, name: "Phone"},
//   {id: 2, name: "Laptop"}
// ];

// const names = products.map(p => p.name);
// ⭐ 3. Chain with filter
// const arr = [1,2,3,4,5];

// const result = arr
//   .filter(num => num % 2 === 0)
//   .map(num => num * 10);

// console.log(result); // [20, 40]
// ⭐ 4. Working with strings
// const str = "hello";

// const result = str.split("").map(char => char.toUpperCase());

// console.log(result.join("")); // HELLO
// ⭐ 5. Using index
// const arr = [10, 20, 30];

// const result = arr.map((val, i) => val + i);

// console.log(result); // [10, 21, 32]
// ⭐ 6. Convert types (VERY COMMON)
// ["1", "2", "3"].map(Number); // [1, 2, 3]