import React from 'react'
import Home from './Home'
import About from './About'

const App = () => {
  // Type 3 (we create new coponent)
  let obj  = {
      name : "Rajesh",
      age : 35,
      city: "jaipur"
  }

  // Type 2
  let num = 10;

  return (
<>
{/* Type 1 */}
{/* <div style={{display : "flex", justifyContent: "space-between" }}> */}
     {/*  Type 1  */}
    {/* <Home userName = "manish" age="30"/>      
    <Home userName = "anuj" age={num}/>      
    <Home userName = "suresh" />      
</div> */}

{/* Type 2 */}
{/* <div>
    <Home age = {num}/>
</div> */}

{/* Type 3 */}
<div>
  <Home abc = {obj}/>
</div>


{/* Type 4 */}
{/* <About>
  <div>Content 1</div>
  <div>Content 2</div>
</About>

<About>
  <p>Anuj </p>
</About> */}




</>

  )
}

export default App
