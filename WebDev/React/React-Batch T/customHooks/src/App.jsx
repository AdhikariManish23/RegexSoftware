import React from 'react'
import OneComponent from './OneComponent'
const App = () => {

  // const {data} = OneComponent()
  // console.log("data",data)
// Question But if we have different API or Data then we have to create another Component that where we Create Custom Component to avoiding the creation of same component multiple times 

  const {data,error} = OneComponent('https://jsonplaceholder.typicode.com/todos/1')
  console.log("data",data);



  const {data : data1, error:error1} = OneComponent('https://jsonplaceholder.typicode.com/users/1')
  console.log("data1",data1);


  return (
    <>
      <h1></h1>
    </>
  )
}

export default App
