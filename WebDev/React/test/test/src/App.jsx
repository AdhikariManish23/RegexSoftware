import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from './assets/vite.svg'
import heroImg from './assets/hero.png'
import './App.css'


// Question 1

function App() {

  // Data Object
  const data = {
    India: {
      Rajasthan: ["Jaipur", "Udaipur", "Kota"],
      Gujarat: ["Ahmedabad", "Surat", "Vadodara"],
      Maharashtra: ["Mumbai", "Pune", "Nagpur"],
    },

    USA: {
      California: ["Los Angeles", "San Diego", "San Francisco"],
      Texas: ["Houston", "Dallas", "Austin"],
      Florida: ["Miami", "Orlando", "Tampa"],
    },

    Canada: {
      Ontario: ["Toronto", "Ottawa", "Hamilton"],
      Alberta: ["Calgary", "Edmonton", "Red Deer"],
    },
  };

  // State Variables
  const [country, setCountry] = useState("");
  const [state, setState] = useState("");
  const [city, setCity] = useState("");

  // Handle Country Change
  const handleCountryChange = (e) => {
    setCountry(e.target.value);

    // Reset state and city
    setState("");
    setCity("");
  };

  // Handle State Change
  const handleStateChange = (e) => {
    setState(e.target.value);

    // Reset city
    setCity("");
  };

  return (
    <div style={{ padding: "30px" }}>

      <h1>Country State City Dropdown</h1>

      {/* Country Dropdown */}
      <div>
        <label>Country: </label>

        <select value={country} onChange={handleCountryChange}>
          <option value="">Select Country</option>

          {Object.keys(data).map((countryName) => (
            <option key={countryName} value={countryName}>
              {countryName}
            </option>
          ))}
        </select>
      </div>

      <br />

      {/* State Dropdown */}
      <div>
        <label>State: </label>

        <select
          value={state}
          onChange={handleStateChange}
          disabled={!country}
        >
          <option value="">Select State</option>

          {country &&
            Object.keys(data[country]).map((stateName) => (
              <option key={stateName} value={stateName}>
                {stateName}
              </option>
            ))}
        </select>
      </div>

      <br />

      {/* City Dropdown */}
      <div>
        <label>City: </label>

        <select
          value={city}
          onChange={(e) => setCity(e.target.value)}
          disabled={!state}
        >
          <option value="">Select City</option>

          {state &&
            data[country][state].map((cityName) => (
              <option key={cityName} value={cityName}>
                {cityName}
              </option>
            ))}
        </select>
      </div>

      <hr />

      {/* Show Selected Values */}
      <h2>Selected Values</h2>

      <p>Country: {country}</p>
      <p>State: {state}</p>
      <p>City: {city}</p>

    </div>
  );
}

export default App;

// Question 2

// function App() {

//   // Input Array
//   const fruits = [
//     "apple",
//     "banana",
//     "apple",
//     "orange",
//     "banana",
//     "apple"
//   ];

//   // Count Frequency
//   const countElements = (arr) => {
//     const count = {};

//     arr.forEach((item) => {
//       count[item] = (count[item] || 0) + 1;
//     });

//     return count;
//   };

//   const result = countElements(fruits);

//   return (
//     <div style={{ padding: "30px", fontFamily: "Arial" }}>
//       <h1>Count Elements in Array</h1>

//       <h3>Input Array:</h3>
//       <p>{JSON.stringify(fruits)}</p>

//       <h3>Output:</h3>

//       {Object.entries(result).map(([key, value]) => (
//         <p key={key}>
//           {key} : {value}
//         </p>
//       ))}
//     </div>
//   );
// }

// export default App;



// Question3

// const input = [
//     ["name", "rahul"],
//     ["age", 22],
//     ["city", "jaipur"]
// ];

// const obj = Object.fromEntries(input);

// obj.country = "india";
// obj.email = "sample123@gmail.com";

// const dynamicKey = "mobile";
// obj[dynamicKey] = "456462234";

// console.log(obj);
