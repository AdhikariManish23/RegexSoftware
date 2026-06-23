import React, {useState} from 'react'

const form = () => {

    const [name, setName] = useState("")
    const [email, setEmail] = useState("")
    const [password, setPassword] = useState("")

    console.log("name",name);
    console.log("email",email);
    console.log("password",password);

    const submitHandler = (e)=>{
        e.preventDefault()
        console.log(name,email,password)
    }
   
  return (
    <div>
      <h1>SignUp</h1>
      <form onSubmit={submitHandler}>
       <div> 
      <label htmlFor='name'>Name</label>
      <input type="text" id='name' name='name' onChange={(e) => setName (e.target.value)}/>
      </div>
      <div>
      <label htmlFor='email'>email</label>
      <input type="email" id='email' name='email' onChange={(e) => setEmail (e.target.value)}/>
      </div>
      <div>
      <label htmlFor='password'>Password</label>
      <input type="password" id='password' name='password' onChange={(e) => setPassword (e.target.value)} />
      </div>
      <div>
      <input type="submit" value='submit' />
      </div>
      </form>
    </div>
  )
}

export default form
