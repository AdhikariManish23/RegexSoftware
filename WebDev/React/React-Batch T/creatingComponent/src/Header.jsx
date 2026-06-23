import React from 'react'
import Box from './Box'

const Header = () => {
  return (
    <div style={{backgroundColor:"lightblue", height:"200px", display:"flex", justifyContent:"space-around ", paddingTop: "80px",margin: "0px" }}>
        <div style={{fontSize: "50px"}}>LOGO</div>
        <Box/>
        <Box/>
        <Box/>
        <Box/>
        <Box/>
    </div>
  )
}

export default Header
