import React from 'react'

const Component = ({Data}) => {
    // console.log(e)
  return (
    <div>
      <h1>Hello {Data[0].name} age : {Data[0].age} city : {Data[0].city}</h1>
      <h1>Hello {Data[1].name} {Data[1].age} {Data[1].city}</h1>
      <h1>Hello {Data[2].name} {Data[2].age} {Data[2].city}</h1>
      
    </div>
  )
}

export default Component
