import React from 'react'
import { useLocation } from 'react-router-dom'


const About = () => {

  let location = useLocation()
  console.log(location);

  return (
    <div>
      About Page {location.state.name}
    </div>
  )
}

export default About
