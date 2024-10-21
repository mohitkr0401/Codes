import React from 'react'

function CompB() {
  return (
    <div>
      <form>
        <h1>Login Form</h1>
        {/* <h2>Mohit Mental piece</h2> */}
        <label for="username">Username: </label>
        <input type="text" id="username" name="username" required/>
        <br/>
        <label for="password">Password: </label>
        <input type="password" id="password" name="password" required/>
        <br/>
        <button type="submit">Login</button>
        <hr />
      </form>
    </div>
  )
}

export default CompB
