import React, { useEffect, useState } from "react";

const ApiComponent = () => {
  const [store, setStore] = useState([]);

  useEffect(() => {
    async function fetchData() {
      const response = await fetch("https://dummyjson.com/products");
      const result = await response.json();
      console.log(result);
      setStore(result.products);
    }

    fetchData();
  }, []);

  return (
    <>
    <h1 style={{textAlign: "center"}}>All Products</h1>
    <div  style={{display: "flex",flexWrap: "wrap",gap: "50px",justifyContent: "center",padding: "20px",}}>
      
    
      {store.map((product) => (
        <div key={product.id}  style={{
      backgroundColor: "lightblue",
      width: "270px",
      minHeight: "180px",
      padding: "15px",
      borderRadius: "10px",
      boxShadow: "0 2px 8px rgba(0,0,0,0.2)",
  }}>
    
          <h3>Title : {product.title}</h3>

          <p>Brand : {product.brand}</p>

          <p>Category : {product.category}</p>

          <p>Price : ${product.price}</p>

          
        </div>
      ))}
    </div>
    </>
  );
};

export default ApiComponent;