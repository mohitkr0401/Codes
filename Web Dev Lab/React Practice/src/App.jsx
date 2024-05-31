import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'

function App() {
  const [count, setCount] = useState(0)

  function f1() {
    setCount(count+1)
  }
  
  function f2() {
    setCount(count-1)
  }

  
  function f3() {
    setCount(0)
  }

  return (
    <>
    <div id="count">{count}</div>
    <button onClick={f1}>+</button>
    <button onClick={f2}>-</button>
    <button onClick={f3}>Reset</button>
    </>
  )
}

export default App
