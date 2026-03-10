// <-------*Object*------>

// Object CREATION

// 1 literal method (basic)
// let obj={
//     id:10,
//     name:"manish",
//     course:"mern stack"
// }

// 2 new keyword

// let obj = new Object()
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


// 7. Object.assign

// let obj = {name:"abhishek"}
// let obj1 = {id : 1}

// let obj2 = Object.assign({},obj,obj1) // we merge the both above object 
// console.log(obj2);

// obj2.name = "manish"

// console.log(obj);
// console.log(obj1);
// console.log(obj2);

// 8. Object.hasOwn (it check the key is in Object or not )

let obj = {name : "abc"}
console.log(Object.hasOwn(obj, "name"));

//                             OR

console.log("name" in obj);
console.log("id" in obj);

 