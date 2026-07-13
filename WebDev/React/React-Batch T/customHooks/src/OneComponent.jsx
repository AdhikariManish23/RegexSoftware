import React, { useEffect, useState } from 'react'

const OneComponent = (url) => {

    const [data,setData] = useState([])
    const [error,setError] = useState([])
    

    useEffect(()=>{
        // fetch('https://jsonplaceholder.typicode.com/todos/1')   this is the static method only single Api or data can fetch 
        fetch(url)
      .then(response => response.json())
      .then(json => setData(json))
      .catch((err)=>setError(err))
    },[])

  return ({data,error})
}

export default OneComponent
