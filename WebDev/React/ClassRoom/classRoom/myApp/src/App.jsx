import React, { useState } from 'react'
import Component from './Component'
import UseAxios from './UseAxios'



const App = () => {

  const arr = [
    {
    name : "manish" ,age : 24 , city : "jaipur"
    },
    {
    name : "suresh" , age : 23, city: "mumbai"
    },
    {
    name : "rameesh" ,age : 22 , city : "kolkata"
    }
]


  const [form, setForm] = useState({
    name : "",
    email: "",
    password: ""
  })

  const changehandler = (e)=>{
    const {value,name} = e.target
    setForm({
      ...form,
      [name] : value
    }) 
  }

  const submitHandler = (e)=>{
    e.preventDefault()

    console.log(form)
  }



  console.log("app render")
  return (
    <div>
      {/* <form onSubmit={submitHandler}>
        <label htmlFor="name">Name : </label>
        <input type="text" name='name' onChange={changehandler}/>
 <br />    
 <br />    
        <label htmlFor="email">Email : </label>
        <input type="text" name='email' onChange={changehandler}/>
  <br />
  <br />
        <label htmlFor="password">Password : </label>
        <input type="text" name='password' onChange={changehandler}/>
  <br />
  <br />
      <button>Submit</button>
      </form> */}



      {/* <Component Data={arr} /> */}


      {/* <UseAxios/> */}

      
    </div>
  )
}

export default App
