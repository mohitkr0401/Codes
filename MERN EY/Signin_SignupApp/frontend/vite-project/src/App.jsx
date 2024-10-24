  import React from 'react';
  import { BrowserRouter as Router, Route, Routes } from 'react-router-dom';
  import Navbar from './components/Navbar';
  import Home from './components/Home';
  import About from './components/About';
  import Contact from './components/Contact';
  import SigninSignup from './components/SigninSignup';
  import 'bootstrap/dist/css/bootstrap.min.css';


  function App() {
    return (
      <Router>
        <Navbar />
        <div className="container mt-4">
          <Routes>
            <Route path="/" element={<Home />} />
            <Route path="/about" element={<About />} />
            <Route path="/contact" element={<Contact />} />
            <Route path="/signin" element={<SigninSignup />} />
          </Routes>
        </div>
      </Router>
    );
  }

  export default App;
