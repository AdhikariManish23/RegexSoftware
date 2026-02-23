//<<<-----------Array --------->>>

// let a=[]
// console.log(typeof a);

// let arr=new Array()
// console.log(typeof arr);

// // Can store numbers, strings, objects, or even other arrays.
// let mixed = [42, "hello", true, [1, 2, 3]];
// console.log(mixed[0]);
// console.log(mixed[1]);
// console.log(mixed[2]);

// let arr=[10,20,30,40]
// console.log(arr);

// console.log(arr[1]); //array access karna arr[0]

// ARRAY.LENGTH (array ki length nikalna)
 
// let arr=[10,20,30,40,50]
// console.log(arr.length); 
// let arr=[10,20,30,40,50] // index size=4, length=5
// console.log(arr);

// let arr = []
// arr[100]=60;
// console.log(arr.length);  // 100+1 = 101

// TO STRING (convert array into string)

// const fruits = ["Banana", "Orange", "Apple", "Mango"];
// let myList = fruits.toString();
// console.log(myList); // prints Banana,Orange,Apple,Mango

// JOIN (work as a toString , but here you can give the seperator)
// const fruits = ["Banana", "Orange", "Apple", "Mango"];
// console.log(fruits.join(" * "));

// ARRAY.IS ARRAY
// const fruits = ["Banana", "Apple"];
// console.log(Array.isArray(fruits));  // true
// const name = "Manish";
// console.log(Array.isArray(name));  // false


//<<<<<----mutable method---->>>// change only origanal array


//element add in array

// 2.push: add Element in last index

// let arr=[10,20,30,40,50]
// let arr1=arr.push(60)
// console.log(arr);
// console.log(arr1);

// 3. unshift: add Element in start index

// let arr=[10,20,30,40,50]
// let arr1=arr.unshift(5)
// console.log(arr);// to return modify array 
// console.log(arr1); // to return modify length


// delete/remove method

// 4. pop : remove Element last index 

// let arr=[10,20,30,40,50]
// let arr1=arr.pop()
// console.log(arr);

// 5. shift : to remove first index Element 

// let arr=[10,20,30,40,50]
// let arr1=arr.shift()
// console.log(arr);
// console.log(arr1);


// 6. splice : add/remove/update element 

// let arr=[10,20,30,40,50]

// let arr1=arr.splice(2,2,80,90) // start kaha se delete karna hai ,kitne delete karne hai ,or kirne add karne hai
// let arr1=arr.splice(0,0,80)
// console.log(arr);

// 7. slice (startindex,lastindex): extract array  

// let arr=[10,20,30,40,50]

// let arr1=arr.slice(1,3)

// console.log(arr1);

// // 8. sort : 

// let arr=[30,5,10,6,3,20]
// let arr1=arr.sort((a,b)=>a-b)
// console.log(arr);
// console.log(arr1);

// 8.5 tosort:

// let arr=[10,20,2,6,1,30,40]
// let arr1=arr.toSorted((a,b)=>b-a)
// console.log(arr);
// console.log(arr1);


// 9. reverse:

// let arr=[10,20,30,40]
// let arr1=arr.reverse();
// console.log(arr);

// 10. toreverse : to return new array reverse karega

// let arr=[10,20,30,40,50]
// let arr1=arr.toReversed()
// // console.log(arr);
// console.log(arr1);

// 11. concat :  both array ko add karta hai

// let arr=[10,20,30]
// let arr1=[40,50,60]
// let arr2=arr.concat(arr1)
// console.log(arr2);

// 12. indexOf : left to right

// let arr=[10,20,30,40,50]
// let arr1=arr.indexOf(30)
// let arr2=arr.indexOf(80)
// console.log(arr1);
// console.log(arr2);


// 13. lastIndexOf : right to left

// let arr=[10,20,30,20,40,50]
// let arr1=arr.lastIndexOf(20)
// console.log(arr1);

// 14. includes : check karta hai ki bo exits 

// let arr=[10,20,30,40,50]
// let arr1=arr.includes(20)
// console.log(arr1);

// 16. find: 
// let arr=[10,20,30,40,50]
// let arr1=arr.find((val,i)=> {
//     console.log(val,i);
    
// })

// let arr=[10,20,30,40,50]
// let arr1=arr.find((val,i)=> {
//     if(val>20) console.log(val,i);
// })

// let arr=[10,20,30,40,50]
// let arr1=arr.find((val,i) => val>20)

// console.log(arr1);

// let arr=[10,20,30,40,50]
// let arr1=arr.find((val)=>val>30)
// console.log(arr1);

// 17. findIndex():to return first index find

// let arr=[10,20,30,40,50]
// let arr1=arr.findIndex((val) => val < 40)
// console.log(arr1);

// 18. findLast():to return last max index 

// let arr=[10,20,30,40,50]
// // let max=0
// let arr1=arr.findLast((val)=> val>30)
// console.log(arr1);

// 19. findIndexLast():

// let arr=[10,20,30,40,50]
// let arr1=arr.findLastIndex((val) => val>10)
// console.log(arr1);

// 20. filter: to return all values 

// let arr=[10,20,30,40,50]
// let arr1=arr.filter((val)=>val>30)
// let arr2=arr.filter((val)=>val<40)
// console.log(arr1);
// console.log(arr2);

// 21. map():-to return transform data 

// let arr=[10,20,30,40,50]
// let arr1=arr.map((val) => val+5)
// console.log(arr1);

// let arr=[10,20,30,40,50]
// let arr1=arr.map((val,index,abc)=>{return abc})
// console.log(arr1);


// 22. flat : to convert nested array 
 
// let arr=[10,[20,[30,[40,[50]]]]]
// let demo=[10,20,30,40,50]  it convert into 1d array 
// let arr1=arr.flat()// default 1 he bracket remove hoga 
// let arr1=arr.flat(3) // parameterised
// console.log(arr);
// console.log(arr1);
// let arr2=arr.flat(Infinity) //unlimited nested array ko array me convert karta hai
// console.log(arr2); // removes all bracket 


// 23. forEach():- forEach kabhi kuch bhi return karta hai

// let arr=[10,20,30,40,50]
// let arr1=arr.forEach((val)=>{
//     console.log(val);
// })  
// console.log(arr1);
// let arr2=[]
// let arr=[10,20,30,40,50,13,11,17,35]
// let arr1=arr.forEach((val) => {
//     if(val%2==0)
//     {
//         return arr2.push(val)
//     }
// })
// console.log(arr2);


// 24. reduce :- ((acc,curr,index,self_array))

// let arr=[10,20,30,40,50,60]
// let arr1=arr.reduce((acc,val,i)=>console.log(acc,val,i),2
// )

// let arr=[10,20,30,40,50,60]
// let arr1=arr.reduce((acc,val,i)=>console.log(acc,val,i) // agar hum accumleter ki value nhi de to automatic 0 index first ki value lele ga
// )

// let arr=[10,20,30,40,50]
// let arr1=arr.reduce((acc,val)=>acc+val)
// console.log(arr1);

// let arr=["a","a","b","c","d","b","c","a"]
// let result=arr.reduce((acc,value,index,self)=>{console.log(acc,value,index);
// },{})

// let arr = [1, 2, 2, 3, 3, 3, 4];
// let freq = arr.reduce((acc, curr) => {
//     acc[curr] = (acc[curr] || 0) + 1;
//     return acc;
// }, {});
// console.log(freq);

// let arr = [5, 12, 3, 21, 8];
// let max = arr.reduce((acc, curr) => {
//     return Math.max(acc, curr);
// }, -Infinity);

// 25. flatmap():-

// let arr=[10,20,30,40,50]
// let arr1=arr.flatMap((val,i)=>[val*2])
// console.log(arr1);



// 26. for...of
// let abc = [1,2,3,4];
// for(let val of abs){
//     console.log(val); 
// }



// 27.  Every()  check all condition to be true then it return true if any condition is false then it returns false
// let abc = [1,6,3,4];
// let abc2 = abc.every((val) => val >5)
// console.log(abc2);


// 28. some()   if any valu is true to condition then it return true
// let abc = [1,6,3,4];
// let abc2 = abc.some((val) => val >5)
// console.log(abc2);


// 29. spread operaotr to extract (...) 
// function abc(a,b){
//     console.log(a,b);
    
// }
// let arr = [10,20]
// abc(...arr)


// 30. rest operator used to collect values(...)
// function abc(a,b){
//     console.log(a,b);
    
// }
// let arr = [10,20,30,40]
// abc(arr)

