import React, { useEffect, useLayoutEffect, useRef } from 'react'

// Here we learn about two more Hooks

const UseLayout = () => {

    let abc  = useRef()

    // Synchronus
    useEffect(()=>{
        abc.current.style.color = "green"
        console.log(abc.current)
    },[])

    // Asynchronus
    useLayoutEffect(()=>{
        abc.current.style.color = "brown"
        console.log(abc.current)
    },[])


  return (
    <div>
      <p ref={abc}>Lorem ipsum dolor sit amet, consectetur adipisicing elit. Sed corrupti accusantium culpa voluptatibus itaque, architecto placeat neque veniam numquam adipisci. Veniam maiores accusantium blanditiis excepturi obcaecati, nisi reprehenderit cumque explicabo?\</p>
    </div>
  )
}

export default UseLayout
