// Question 1
// remove duplicates in array

// let arr = [1,2,2,3,4,5,5];

// const sort = arr.filter((item,index) => arr.indexOf(item) === index);

// console.log(sort);

// Question 2
// find second smalest element
// const arr = [5,3,1,4,2];

// let smallest =  Infinity;
// let secondSmallest = Infinity;

// for(let num of arr){
//     if(num < smallest){
//         secondSmallest = smallest;
//         smallest = num;
//     }
//     else if( num < secondSmallest && num != smallest){
//         secondSmallest = num;
//     }
// }

// console.log(secondSmallest);


// Question 3
// Group property wise in an OBJECT

const students  = [
    {name: "rahul" , city: "jaipur"},
    {name: "anuj", city: "kota"},
    {name: "ram", city: "jodhpur"},
    {name: "manish", city: "jaipur"},
]

const groupByCity = {};

students.forEach((student) => {
  const key = student.city;

  if (!groupByCity[key]) {
    groupByCity[key] = [];
  }

  groupByCity[key].push(student);
});

console.log(groupByCity);

// Question 5




