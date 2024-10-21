import React from 'react'
import { useState } from 'react'

function Form() {
    const [username, setName] = useState('Bob');
    function handleInput(e) {
        e.preventDefault();
        e.target.value
    }
    function handleSubmit() {
        
    }
  return (
    <div>
      <form>
        <input type="text" name="name" placeholder='Enter Your Name' />

        <input type="button" value="submit" />
      </form>
    </div>
  )
}

export default Form