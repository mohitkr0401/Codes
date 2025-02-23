import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'


// hydration is the process of converting the static html into dynamic html
// isme pehle static html aata hai, phir react us static html ko dynamic html mai convert karta hai means usme interactivity add karta hai jaise ki click events, hover events etc, Basically javascript ko load karke usme interactivity add karta hai.





function App() {

  const [counter, setCounter]  = useState(15)

  //let counter = 15

  const addValue = () => {
    //counter = counter + 1
    setCounter(prevCounter => prevCounter + 1)
    setCounter(prevCounter => prevCounter + 1 )
    setCounter(prevCounter => prevCounter + 1)
    setCounter(prevCounter => prevCounter + 1)
    
  }

  const removeValue = () => {
    setCounter(counter - 1)
  }
  
  return (
    <>
      <h1>Chai aur react</h1>
      <h2>Counter value: {counter}</h2>

      <button
      onClick={addValue}
      >Add value {counter}</button> 
      <br />
      <button
      onClick={removeValue}
      >remove value {counter}</button>
      <p>footer: {counter}</p>
    </>
  )
}

export default App
