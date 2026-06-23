import React from "react";

// names se export kr rhe hai yaha  whenever you are exporting with name it always send as an Object 
export function Greeting(){
    return(
        <div>
            Hey!! i am a function 
        </div>
    )
}

export const Abc = ()=>{
    return(
        <div>I am Another Function</div>
    )
}

// export default Greeting; // yaha hum koi bhi naam se import kr sakte hai dusre component