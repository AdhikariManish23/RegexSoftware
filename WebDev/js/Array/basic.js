//<<<-----------Array --------->>>

let a=[]
console.log(typeof a);

let arr=new Array()
console.log(typeof arr);

// let arr=[10,20,30,40]
// console.log(arr);

// console.log(arr[1]); //array access karna arr[0]

// array ki length nikalna (arr.length)
// let arr=[10,20,30,40,50]

// console.log(arr.length); // array ki length nikalna

// let arr=[10,20,30,40,50] // index size=4, length=5
// console.log(arr);

// arr[100]=60;
// console.log(arr.length);

//<<<<<----mutable method---->>>// change only origanal array


//element add in array

// 2.push: add Element in last index

// let arr=[10,20,30,40,50]
// let arr1=arr.push(60)

// // console.log(arr);

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

// 6. splice : add/remove/update element 

// let arr=[10,20,30,40,50]

// let arr1=arr.splice(2,2,80,90) // start kaha se delete karna hai ,kitne delete karne hai ,or kirne add karne hai
// let arr1=arr.splice(0,0,80)
// console.log(arr);

// 7. slice (startindex,lastindex): extract array  

// let arr=[10,20,30,40,50]

// let arr1=arr.slice(1,3)

// console.log(arr1);
