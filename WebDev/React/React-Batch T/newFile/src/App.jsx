import React from 'react'
// import './App.css';
import style from "./App.module.css"

const App = () => {
  
  const xyz = {
    color : "green",
    fontSize: "50px"
  }

  return (
    <>
    {/* <h1 style={{color: "red" ,fontSize : "50px"}}>Inline CSS</h1> */}

    {/* <div className='abc'>External CSS</div>
     */}

    {/* <div style={xyz}>Internal CSS</div>  */}
{/* 
    <div className={style.jkl}>Module CSS</div>
    <div className={style.mno}>Module CSS</div> */}

  <div className = "font-medium text-sky-500">TailWind</div> 

    </>
  )
}

export default App
