import React from "react";
import { useState } from "react";

function Signup() {
  const [username, setName] = useState("Bob");
  function handleInput(e) {
    e.preventDefault();
    setName(e.target.value);
    // e.target.value
    
  }
  function handleSubmit() {
    console.log(username);
  }
  return (
    <div className="container mt-5">
      <h1 className="bg-primary p-3 text-white">Login Form</h1>
      <form>
        <input
          className="form-control"
          name="name"
          type="text"
          placeholder="Enter Your Name"
          value={username}
          onChange={handleInput}
        />

        <input
          className="form-control btn btn-primary"
          type="button"
          value="Submit"
          onClick={handleSubmit}
        />
      </form>
    </div>
  );
}

export default Signup;
