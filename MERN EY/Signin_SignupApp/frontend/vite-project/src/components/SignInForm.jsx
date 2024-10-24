import React, { useState } from 'react';

const SignInForm = () => {
  const [formData, setFormData] = useState({ username: '', password: '' });

  const handleChange = (e) => {
    setFormData({ ...formData, [e.target.name]: e.target.value });
  };
  const [resData, setresData] = useState({
    ok:"",
    msg:""
  })

  const handleSubmit = (e) => {
    e.preventDefault();
    const p = fetch('http://localhost:3000/signin', {
      method: 'POST',
      headers:{
        "Content-Type": "application/json",
      },
      body: JSON.stringify(formData),
    })
    p.then((res)=>{
      return res.json()
    })
    .then((data)=>{
      console.log(data)
      setresData(data)
    })
    console.log("Sign In Form Data: ", formData);
  };

  return (
    <>
    <form onSubmit={handleSubmit}>
      <div className="mb-3">
        <label className="form-label">Username</label>
        <input 
          type="text" 
          name="username" 
          className="form-control" 
          value={formData.username} 
          onChange={handleChange} 
          required 
        />
      </div>
      <div className="mb-3">
        <label className="form-label">Password</label>
        <input 
          type="password" 
          name="password" 
          className="form-control" 
          value={formData.password} 
          onChange={handleChange} 
          required 
        />
      </div>
      <button type="submit" className="btn btn-primary w-100">Sign In</button>
    </form>
    <h3>Welcome {resData.ok==1?msg:''}</h3>
</>
  );
};

export default SignInForm;
