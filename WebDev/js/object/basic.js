// <-------*Object*------>

// Object CREATION

// 1 literal method (basic)
// let obj={
//     id:10,
//     name:"manish",
//     course:"mern stack"
// }

// // 2 new keyword

// // let obj = new Object()
// console.log(obj);

// obj.id = 1
// obj.name = "manish"
// obj.course = "mern-Stack"
// console.log(obj);

// // 3 Constructor
// function abc(id,name,course){
//     this.id = id;
//     this.name = name;
//     this.course = course;
// }

// let obj = new abc(1,"manish","mern");
// console.log(obj);


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




// // DESTRUCTURE

// let {id,name,course,address}=obj;
// console.log(id,name,course,address);
// let {id:id1,...rest}=obj
// console.log(id1,rest);


// let id = 1;
// let name  = "manish"
// let course = "mern"
// function abc(...args){
//     return args;
    
// }
// console.log(abc(id,name,course));


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

let a  = null

let b = a ?? "demo"  // What it means when u have null vlaue instead of printing null print "demo"
console.log(b);
