import React from 'react'
import { useLocation } from 'react-router-dom'


const About = () => {

  let location = useLocation()
  console.log(location);

  return (
    <div>
      <h1>this is about page</h1>
      About Page {location.state?.name}
    </div>
  )
}

export default About
