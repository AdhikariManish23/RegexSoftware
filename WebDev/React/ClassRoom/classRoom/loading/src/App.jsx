import React, { useEffect, useState } from 'react'

const App = () => {

//   const [loading, setLoading] = useState(true)

//   useEffect(()=>{
//     setTimeout(()=>{
//       setLoading(false)
//     },3000);
//   },[])

//   if(loading){
//     return <h1>"Loading..."</h1>
//   }

//   return (
//     <div>
//       Data
//     </div>
//   )
// }

const [data, setData] = useState(null);
const [loading, setLoading] = useState(true);

useEffect(() => {
  async function fetchData() {
    const response = await fetch('https://jsonplaceholder.typicode.com/todos/1')
    const result = await response.json();

    setData(result);
    setLoading(false);
  }

  fetchData();
}, []);

if (loading) {
  return <h1>Loading...</h1>;
}

return (
  <div>
    <h1>"Data" : {data.title}</h1>

  </div>
)

}
export default App
