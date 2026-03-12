1. What is an object in JavaScript?

An object in JavaScript is a data structure used to store multiple values in the form of key–value pairs.
It helps us group related data and functions together in one place

2. How do you create an object using object literal?

 let obj={
    id:10,
    name:"manish",
}

3. How do you access object properties using dot notation?

console.log(obj.name);

5. What is the difference between dot and bracket notation?

Dot Notation	                                   Bracket Notation
Uses . to access property	                 |  Uses [] to access property
Property name must be written directly	     |  Property name must be written as a string
Cannot access properties with spaces or special characters |	Can access properties with spaces or special characters
Cannot use variables as property names	     |  Can use variables as property names

6. What happens if two properties in an object have the same key?
 
let obj={
    name:"manish",
    age : 23,
    age : 25,
}

it overlaps the 23 and store 25 in age

7. How do you add a new property to an existing object?

obj.address = "C-361"

8. How do you delete a property from an object?

delete obj.address

9. How do you check if a property exists in an object?

we can use 2 ways 
  I  : use of In Keyword
        console.log("name" in obj);
  II : use of hasOwn Method
        console.log(Object.hasOwn(obj, "name"));

10. What is the difference between primitive values and object values?