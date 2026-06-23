import React from 'react'
import { Greeting } from './About' // why we use curly braces because it is and Object because we are importing as an naming 

const Header = () => {
  return (
    <div>
      <h1>Heading 1 </h1>
      <Greeting/>
    </div>
  )
}

export default Header
