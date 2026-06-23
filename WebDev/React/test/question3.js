const input = [
    ["name", "rahul"],
    ["age", 22],
    ["city", "jaipur"]
];

const obj = Object.fromEntries(input);

obj.country = "india";
obj.email = "sample123@gmail.com";

const dynamicKey = "mobile";
obj[dynamicKey] = "456462234";

console.log(obj);
