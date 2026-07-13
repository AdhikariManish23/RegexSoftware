import React, { useEffect, useState } from 'react'
import { useNavigate } from 'react-router-dom'

const Home = () => {
  
    let navigation = useNavigate()

    const viewProfile = (id) =>{
      navigation(`/user/${id}`)
    }


    const [state,setState] = useState([])

    console.log(state);

    useEffect(()=>{
      fetch(`https://jsonplaceholder.typicode.com/users`)
      .then(res => res.json())
      .then(data => setState(data))
    },[])
  
    

    return (

    <>
    <div>Home Page</div>
    <div>
      {state?.map((val) =>(
          <div key = {val.id} style={{border: "2px solid red" , margin: "10px"}} onClick={()=>viewProfile(val.id)}>
            <h2>{val.name}</h2>
            <h2>{val.email}</h2>
            
          </div>

      ))}
    </div>


    </>
  )
}

export default Home
