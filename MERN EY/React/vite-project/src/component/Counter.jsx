import React from 'react'
import { useState } from 'react';

function Counter() {
    const [count, setCount] = useState(100);
    // let count=0;
    function HandleIncre() {
        // count+=1;
        setCount(count + 1);
        console.log(count);
        
    }
    function HandleDecre() {
        setCount(count-1)
        console.log(count);
        
    }
  return (
    <div>
      <button onClick={HandleIncre}>Increment</button>
      <button onClick={HandleDecre}>Decrement</button>
      <h1>Count: {count}</h1>
    </div>
  )
}

export default Counter
