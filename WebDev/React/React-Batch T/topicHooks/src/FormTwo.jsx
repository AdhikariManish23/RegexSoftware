import React, { useState } from 'react'
// import './index.css'


const Form = () => {
// Single State
    
    const [form,setForm] = useState({
         name : "",
         email: "",
         password:""
    })

    const changeHandler = (e) => {
        const {value,name} = e.target
        setForm({
               ...form,
               [name]:value
        })
    }

    const submitHandler = (e) =>{
      e.preventDefault()
      console.log(form)
    }
  return (
    <div>
      <form onSubmit={submitHandler}>
        <label htmlFor='name'>Name : </label>
        <input type="text" name='name' id='name' onChange={changeHandler}/>

<br />
<br />
        <label htmlFor='email'>Email : </label>
        <input type="email" name='email' id='email' onChange={changeHandler}/>

<br />
<br />

        <label htmlFor="password">Password : </label>
        <input type="password" name='password' id='password' onChange={changeHandler}/>


<br />
<br />

        <button type='submit'>Submit</button>
      </form>
    </div> 
  )
}

export default Form
