import React, { useEffect, useState } from 'react'
import axios from 'axios'



const UseAxios = () => {

  const{data,setData} = useState([])

  useEffect(()=>{

  
  async function fetchData() {
    let res = await axios.get("https://jsonplaceholder.typicode.com/posts" 
      
      // Find Out what is the use of the below bracket
      , {
      email:"",
      password:"" 
    })
    console.log(res.data);
    setData(res.data)
  }
  fetchData()
  },[])
  return (
    <div>
      {data.map(val =>(
        <div key = {val.id}>
          <h1>Title : {val.title}</h1>
          <p>Description : {val.description}</p>
        </div>

      ))}
    </div>
  )
}


export default UseAxios
