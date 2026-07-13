import React, { useContext } from 'react'
import { userContent } from './App'



const Child3 = () => {

    const abc = useContext(userContent)
    return (
    <div>
      <h1>Child 3 {abc}</h1>
    </div>
  )
}

export default Child3
