import React from 'react'
import Header from './Header'
import Mno from './Body'  // here you are importing a component but different name because where you are exportinh is default
import Footer from './Footer'
// import Greeting from './About'
import {Greeting , Abc} from './About'

const App = () => {

  let info = {
    name : "anuj",
    age : 23,
    location : "jagatpura"
  }

  
  return (
    <>
    <Header/>
    <Mno/>
    <Footer/>

    {/* <h1>Heading {name}</h1>  */}
    
    <Greeting/>
    <Abc/>

     <Header/>  // this is the example of nested component

    {/* <table style={{border : "2px solid" , fontSize : "20px", color: "red"}}>
      <tr>
        <th>Name</th>
        <th>age</th>
        <th>location</th>
      </tr>
      <tr>
        <td>{info.name}</td>
        <td>{info.age}</td>
        <td>{info.location}</td>
      </tr>

      </table>   */}

      
    </>
  )
}

export default App
