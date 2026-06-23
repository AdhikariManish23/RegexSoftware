import React from 'react'

const App = () => {

  let a = 10
 
  return (
//     // without react Fragment you have to return only One parent if you try to return any other value it will give error
    <div>
      Parent in App.jsx
      <div>sibling 1</div>
      <div>sibling 2</div>
    </div>
 

// //  Using Fragment we can create multiple sibling beacuse the parent is consider in the main body 
  
//   <>
//   <div className="abc">Sibling 1 {a}</div>
//   <div style={{color: "red"}}>Sibling 2</div>
//   </>

  )
}

export default App




