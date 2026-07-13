import React, { useState } from 'react'
import Child from './Child'

const App = () => {

  const [state,setState] = useState(0)

  return (
    <div>
      <Child val = {state} fun= {setState}/>
    </div>
  )
}

export default App
