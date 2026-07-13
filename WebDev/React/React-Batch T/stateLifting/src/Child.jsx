import React from 'react'

const Child = ({val,fun}) => {
  return (
    <>
    <h1>{val}</h1>
    <button onClick={()=> fun (val+1)}>Click</button>
    </>
  )
}

export default Child
