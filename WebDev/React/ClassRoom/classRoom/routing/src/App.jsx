import React from 'react'
import  {BrowserRouter, Link, Route, Routes } from 'react-router-dom'
import Home from './Home'
import About from './About'
import User from './User'


const App = () => {
  return (
    <BrowserRouter>
    <nav>
      <Link to="/">Home</Link>
      <Link to="/about">About</Link>
    </nav>
    <Routes>
      <Route path="/" element={<Home/>}></Route>
      <Route path="/about" element={<About/>}></Route>
      <Route path="/user/:id" element={<User/>}></Route>
      <Route path= "*" element = {<h1>Page Not Found</h1>}/>
    </Routes>
    </BrowserRouter>
  )
}

export default App
