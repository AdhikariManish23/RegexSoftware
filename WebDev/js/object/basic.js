// <-------*Object*------>

// Object CREATION

// 1 literal method (basic)
// let obj={
//     null :10,
//     name :null,
//     course:"mern stack"
// }
// console.log(obj.null);


// // 2 new keyword

// let obj = new Object()
// console.log(obj);

// obj.id = 1
// obj.name = "manish"
// obj.course = "mern-Stack"
// console.log(obj);

// // 3 Constructor

// this represent the current class object

// function abc(id,name,course){
//     this.id = id;
//     this.name = name;
//     this.course = course;
// }

// let obj3 = new abc(1,"manish","mern");
// console.log(obj3);


// access Object

// let obj={
//     id:10,
//     name:"manish",
//     course:"mern stack"
// }

// console.log(obj);//show output 
// console.log(obj.name); //single output return 1

// console.log(obj["course"]);//single output return 2


// Object :-  add / update / remove 

// let obj={
//     id:1,
//     name:"anuj",
//     course:"mern stack"
// }

// 1 add new key: value 

// obj.role="student" // add new 
// console.log(obj);

// 2 update  object

// obj.id=25 
// console.log(obj);

// 3 delete data

// delete obj.name;  
// console.log(obj);


// REFERENCE

// let obj={
//     id:11,
//     name:"anuj",
//     course:"mern stack",
//     name:"adhira"
// }
// let obj1 = obj;
// console.log(obj);
// console.log(obj1);


// SHALLOW COPY

// let obj={
//     id:11,
//     name:"anuj",
//     course:"mern stack",
//     name:"adhira",
//     address:{
//         city:"jaipur",
//         state:"raj"
//     }
// }

// let obj1 = {...obj}
// obj.id = 23;
// obj.address.city = "alawar" // not work on nested object
// console.log(obj);
// console.log(obj1);




// DEEP COPY

// let obj={
//     id:11,
//     name:"anuj",
//     course:"mern stack",
//     name:"adhira",
//     address:{
//         city:"jaipur",
//         state:"raj"
//     }
// }

// let obj1=structuredClone(obj); // deep copy to change in nested object
// obj1.course="data science"
// obj1.address.city="karauli"   //but in deep copy it work on NESTED object
// console.log(obj);
// console.log(obj1);




// ***********************  Object Destructuring in JavaScript

// let person = {
//   name: "Manish",
//   age: 24,
//   city: "Delhi"
// };

// 1 Using Object Destructing
// let {name, age} = person;
// console.log(name, age);

// 2 Renaming Variables
// let {name: userName, age: userAge} = person;
// console.log(userName, userAge);

// 3 Default Values
// let {name, phoneNo = 192} = person;
// console.log(name, phoneNo);

// **** Find Object length ****

// 1 Object.keys

// let obj = {
//     id: 1,
//     name : "manish",
//     course: "mern StaCK",
// }

// console.log(Object.keys(obj)); // By this we get all the keys of an Object
// console.log(Object.keys(obj).length); // here we got the length of Object

// 2 Object.value()

// let obj = {
//     id: 1,
//     name : "manish",
//     course: "mern StaCK",
// }
// console.log(Object.values(obj)); // it gives the value of keys
// console.log(Object.values(obj).length); // it give the length of object

// 3 Object.entries

// let obj = {
//     id: 1,
//     name : "manish",
//     course: "mern StaCK",
// }
// // console.log(Object.entries(obj)); // it converts an object into an array of key-value pairs and return it

// 4 Object.fromEntries


// let result = Object.entries(obj) // it is rrelated tu above method
// console.log(result);
// console.log(Object.fromEntries(result));  //it does the reverse—turning an array of key-value pairs back into an object.



// 5. Object.assign

// let obj = {name:"abhishek"}
// let obj1 = {id : 1}

// let obj2 = Object.assign({},obj,obj1) // we merge the both above object (and make a copy )

// // let obj2 = Object.assign(obj,obj1) // by doing this we are also doing the same merging but it is the reference if you change any thing in obj2 it also change the obj or obj1 

// console.log(obj2);

// obj2.name = "manish"
// console.log(obj);
// console.log(obj1);
// console.log(obj2);

// 6. Object.hasOwn (it check the key is in Object or not )

// let obj = {name : "abc"}
// console.log(Object.hasOwn(obj, "name"));

// //                             OR

// // 7 in Operator (it works same as hasOwn work) 

// console.log("name" in obj);
// console.log("id" in obj);



// 8 Object.freeze():  No add/delete/update 

// let obj = {
//     id: 1,
//     name : "manish",
//     course: "mern StaCK",
// }
// console.log(obj);

// Object.freeze(obj); // after this you are not able to add/update/delete any key or value in this Object (comment out this line toi know the actual difference)

// obj.name = "adhikari"
// delete obj.id
// obj.addres = "c-2234"
// console.log(obj);

// 9 Object.sealed():  No add/delete Only , here you can update things

// let obj = {
//     id: 1,
//     name : "manish",
//     course: "mern StaCK",
// }
// console.log(obj); 

// Object.seal(obj);

// obj.name = "adhikari"  // Only update will hapen here
// delete obj.id
// obj.addres = "c-2234"
// console.log(obj);



// 10 Objeect.preventExtensions:  No add Only

// let obj = {
//     name: "mukesh"
// }
// Object.preventExtensions(obj)

// obj.id = 1 // here we want to add a new key name ID but it will not add beacuse we use preventExtensions
// console.log(obj); // it still print muskesh

// obj.name = "ramesh"  
// console.log(obj);  // so here name is update
// delete obj.name
// console.log(obj);  // here we delete the key name 


//  11 Object.isSealed

// let obj = {
//     name: "mukesh",
//     id:1
// }
// Object.seal(obj)  // it will help us to seal the object

// console.log(Object.isSealed(obj));  // return in true/fale 


// 12 Object.isFrozen

// let obj = {
//     name: "mukesh",
//     id:1
// }
// Object.freeze(obj)  // it will help us to freeze the object

// console.log(Object.isFrozen(obj));  // return in true/fale 
// console.log(Object.isSealed(obj));  // is also return true beacuse all functionality of sealed is coverd in freeze


// Method :	What it does
// Object.preventExtensions()  	Cannot add new properties
// Object.seal()	            Cannot add or delete properties
// Object.freeze()	            Cannot add, delete, or modify properties

// 13 Object.isExtensible

// false :- No add new pproperties in Object
// true:- add new properties in object

// let obj = {
//     name:"manish"
// }
// Object.preventExtensions(obj)
// console.log(Object.isExtensible(obj));


// **********  Nullish Coalescing Operator ************

// let name  = null
// let name  = undefined
// let name  = "manish"

// let b = name ?? "Guest"  // If u have null/undefined vlaue in variable instead of printing null print "demo"
// console.log(b);



// let name  = null
// let name  = undefined
// let name  = "manish"

// let b = name || "Guest"  
// console.log(b);



//  ***************  Optional Chaining ********************
// it checks value hai ki nhi apne pass
// let obj = {
//     name: "abc"
// }
// console.log(obj?.address?.city);  // undefined
// console.log(obj?.name);  // abc


// // With help Of nullish 
// console.log(obj?.address?.city ?? "city not Found");  // agar nhi hota to yeah mssg print ho jayega


// ************** traverse in Object

// let obj = {
//     id: 1,
//     name: "manish",
//     course: "mern"
// };

// // Key Dynamic hai ya phir key k naam mai space hai toh humko Bracket Notation use krna hai
// for (let key in obj) {
//     console.log(obj[key]);  // BRACKET NOTATIOn Print values
//     console.log(key); // ONly Print Keys
//     console.log(key,obj[key]); // it prints both key and value
    
    
// }


// ************ Symbol ************
// Create two unique symbols with the same description "age"
// const age1 = Symbol("age");
// const age2 = Symbol("age");

// // Create an object with both symbols as keys
// let person = {
//   name: "Ravi",
//   [age1]: 25,   // first age value
//   [age2]: 30    // second age value
// };

// // Access values using their respective symbols
// console.log(person[age1]); // 25
// console.log(person[age2]); // 30




