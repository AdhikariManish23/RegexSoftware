import React, { createContext } from 'react'
import Child1 from './Child1'


export const userContent = createContext()
const App = () => {
  const name = "manish"
  
  return (
    <div>
      <userContent.Provider value={name}>
      <h1>App</h1>
      <Child1/>
      </userContent.Provider>
    </div>
  )
}

export default App
