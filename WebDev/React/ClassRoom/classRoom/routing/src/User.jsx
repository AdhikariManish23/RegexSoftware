import React, { useEffect, useState } from 'react'
import { useParams } from 'react-router-dom'

const User = () => {

    let {id} = useParams()
    console.log(id);

    const [state, setState] = useState({})

    console.log(state);

    useEffect(() =>{
        fetch(`https://jsonplaceholder.typicode.com/users/${id}`)
        .then(res => res.json())
        .then(data => setState(data))
    },[])

  return (
    <>
        <div>{state?.name}</div>
        <div>{state?.email}</div>
        <div>{state?.address?.city}</div>
        <div>{state?.phone}</div>
        <div>{state?.website}</div>
    
    </>
  )
}

export default User



