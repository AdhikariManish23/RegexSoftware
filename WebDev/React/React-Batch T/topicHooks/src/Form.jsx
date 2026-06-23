import React, { useState } from 'react'

const Form = () => {
        const [name,setName]       = useState("")
        const [email,setEmail]     = useState("")
        const [dob,setDob]         = useState("")
        const [gender,setGender]   = useState("")
        const [country,setCountry] = useState("")
        const [message,setMessage] = useState("")

        const submitHandler = (e)=>{
                e.preventDefault()

                console.log(name, email, dob, gender,country,message)
        }

  return (
    <div style={{display : "flex" , justifyContent: "center"}}>
      <form onSubmit={submitHandler}>
        <label htmlFor='name'>Name : </label>
        {/* <input type="text" name='name' id='name' onChange={(e)=>console.log(e)}/>  for understanding how we getting the value  */}
        <input type="text" name='name' id='name' onChange={(e)=>setName(e.target.value)}/>

<br />
<br />
        <label htmlFor='email'>Email : </label>
        <input type="email" name='email' id='email' onChange={(e)=>setEmail(e.target.value)}/>

<br />
<br />
        <label htmlFor='dob'>D.O.B : </label>
        <input type="date" name='dob' id='dob' onChange={(e)=>setDob(e.target.value)}/>
<br />
<br />
        <label >Gender : </label>
        <input type="radio" name='gender' value='Male' id='male' onChange={(e)=>setGender(e.target.value)}/> Male
        <input type="radio" name='gender' value='Female' id='male' onChange={(e)=>setGender(e.target.value)}/> Female
<br />
<br />  
        <label >County : </label>
        <select name="country" onChange={(e) => setCountry(e.target.value)} >
            <option value="">Select Country</option>
            <option value="India">India</option>
            <option value="USA">USA</option>
            <option value="Pakistan">Pakistan</option>
        </select>
<br />
<br />
        <label >Message : </label>
        <textarea name="message" onChange={(e) => setMessage(e.target.value)}>

        </textarea>
<br />
<br />

        <button type='submit'>Submit</button>
      </form>
    </div> 
  )
}

export default Form
