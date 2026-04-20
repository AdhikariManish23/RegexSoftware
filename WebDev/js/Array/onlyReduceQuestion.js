// 🔹 Important Interview Patterns
// ⭐ 1. Sum of array
// const sum = arr.reduce((a,b) => a + b, 0);
// ⭐ 2. Count occurrences (VERY IMPORTANT)
// const arr = ["a","b","a","c","b"];

// const count = arr.reduce((acc, curr) => {
//   acc[curr] = (acc[curr] || 0) + 1;
//   return acc;
// }, {});

// console.log(count);
// // { a: 2, b: 2, c: 1 }
// ⭐ 3. Remove duplicates
// const arr = [1,2,3,3,4];

// const unique = arr.reduce((acc, curr) => {
//   if (!acc.includes(curr)) acc.push(curr);
//   return acc;
// }, []);
// ⭐ 4. Group by property (VERY IMPORTANT)
// const users = [
//   {name: "A", city: "Jaipur"},
//   {name: "B", city: "Kota"},
//   {name: "C", city: "Jaipur"}
// ];

// const grouped = users.reduce((acc, curr) => {
//   const key = curr.city;

//   if (!acc[key]) acc[key] = [];
//   acc[key].push(curr);

//   return acc;
// }, {});
// ⭐ 5. Find max value
// const max = [1,5,3].reduce((acc, curr) => 
//   curr > acc ? curr : acc
// , -Infinity);
// ⭐ 6. Convert array → object
// const arr = ["a","b","c"];

// const obj = arr.reduce((acc, curr, i) => {
//   acc[curr] = i;
//   return acc;
// }, {});
// ⭐ 7. Chain with filter/map
// const result = [1,2,3,4]
//   .filter(x => x % 2 === 0)
//   .reduce((a,b) => a + b, 0);
// // 6
// 🔥 Tricky Interview Questions
// ❓ Q1: What happens without initial value?
// [1,2,3].reduce((acc, curr) => acc + curr);

// 👉 First acc = 1, curr = 2

// ⚠️ Risky for empty arrays:

// [].reduce(...) // ❌ Error
// ❓ Q2: Reduce vs map/filter

// 👉 You can replace both:

// const arr = [1,2,3];

// const result = arr.reduce((acc, curr) => {
//   if (curr > 1) acc.push(curr * 2);
//   return acc;
// }, []);

// 👉 Equivalent to:

// arr.filter(x => x > 1).map(x => x * 2);
// ❓ Q3: Common mistake
// arr.reduce((acc, curr) => {
//   acc + curr; // ❌ forgot return
// }, 0);

// 👉 Result: undefined

// ❓ Q4: Reduce with async (advanced)
// const arr = [1,2,3];

// arr.reduce(async (acc, curr) => {
//   const result = await acc;
//   return result + curr;
// }, Promise.resolve(0));