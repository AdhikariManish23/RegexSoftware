import React from 'react'

// you have to write "children" Key word it is mandatory

const About = ({children}) => {
  return (
    <div>
      <div>{children} </div>
    </div>
  )
}

export default About
