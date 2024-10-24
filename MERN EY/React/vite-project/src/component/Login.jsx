// import React from "react";
// import { useState } from "react";

// function Login() {
//   const [username, setName] = useState("Bob");
//   function handleInput(e) {
//     e.preventDefault();
//     setName(e.target.value);
//     // e.target.value
//   }
//   function handleSubmit() {
//     console.log(username);
//   }
//   return (
//     <div className="container mt-5">
//       <h1 className="bg-primary p-3 text-white">Login Form</h1>
//       <form>
//         <input
//           className="form-control"
//           type="text"
//           placeholder="Enter Your Name"
//           value={username}
//           onChange={handleInput}
//         />

//         <input
//           className="form-control btn btn-primary"
//           type="button"
//           value="Submit"
//           onClick={handleSubmit}
//         />
//       </form>
//     </div>
//   );
// }

// export default Login;

import React, { useState } from "react";

const Login = () => {
  const [email, setEmail] = useState("");
  const [password, setPassword] = useState("");
  const [error, setError] = useState("");

  const handleSubmit = (e) => {
    e.preventDefault();
    if (email === "" || password === "") {
      setError("Email and password are required");
      return;
    }
    console.log("Logging in with:", { email, password });
    setError("");
  };

  return (
    <div style={styles.container}>
      <h2>Login</h2>
      <form onSubmit={handleSubmit} style={styles.form}>
        <div>
          <label>Email:</label>
          <input
            type="email"
            value={email}
            onChange={(e) => setEmail(e.target.value)}
            style={styles.input}
            required
          />
        </div>
        <div>
          <label>Password:</label>
          <input
            type="password"
            value={password}
            onChange={(e) => setPassword(e.target.value)}
            style={styles.input}
            required
          />
        </div>
        {error && <p style={styles.error}>{error}</p>}
        <button type="submit" style={styles.button}>
          Login
        </button>
      </form>
    </div>
  );
};

const styles = {
  container: {
    maxWidth: "300px",
    margin: "0 auto",
    padding: "20px",
    border: "1px solid #ccc",
    borderRadius: "5px",
  },
  form: {
    display: "flex",
    flexDirection: "column",
  },
  input: {
    marginBottom: "10px",
    padding: "8px",
    fontSize: "16px",
  },
  button: {
    padding: "10px",
    fontSize: "16px",
    cursor: "pointer",
  },
  error: {
    color: "red",
    marginBottom: "10px",
  },
};

export default Login;
