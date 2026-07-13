import React, { useCallback, useEffect, useState } from 'react'

const SecondComponent = () => {

// useEffect(callback,dependencies)  Syntax

//     useEffect(()=>{

//     },[])
//     // it is necessary to give dependency like empty array if you dont give the dependencies it rerender again and again

// // Note : You can use useState with useEffect

//     const [counter, setCounter] = useState(0)


//     useEffect(()=>{
//         // inside this data will run until the counter is increased
//     },[counter]) 
 
// ------------------------------------------------------------------------------------------------------------------------------------

useEffect(()=>{
    async function fetchData() {
        let abc = await fetch("https://jsonplaceholder.typicode.com/posts")
        let result = await abc.json();

        console.log(result);
    }

    fetchData()
},[])


  return (
    <div>
      
    </div>
  )
}

export default SecondComponent
