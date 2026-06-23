import React from 'react'

// const Home = (abc) => {  // this is for typw 1 and type 2

const Home = ({abc}) => {
    // console.log(abc) 
  return (
    <>

    {/* // Type 1 and 2
    // <div  style={{height : "100px" , width: "100px" , border: "3px solid red "}}>
    //    {abc.userName} {abc.age}

    // </div> */}


    <div>hello {abc.name} </div>
    <div>hello {abc.age} </div>
  

  </>
  )
}

export default Home
