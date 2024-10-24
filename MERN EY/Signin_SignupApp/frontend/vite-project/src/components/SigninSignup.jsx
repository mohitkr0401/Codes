import React, { useState } from "react";
import SignInForm from "./SignInForm";
import SignUpForm from "./SignUpForm";

const SigninSignup = () => {
  const [isSignIn, setIsSignIn] = useState(true);

  return (
    <div className="container mt-5">
      <div className="row justify-content-center">
        <div className="col-md-6">
          <div className="card">
            <div className="card-body">
              <h3 className="text-center">
                {isSignIn ? "Sign In" : "Sign Up"}
              </h3>
              <hr />
              <div className="d-flex justify-content-center mb-3">
                <button
                  className={`btn ${
                    isSignIn ? "btn-primary" : "btn-outline-primary"
                  }`}
                  onClick={() => setIsSignIn(true)}
                >
                  Sign In
                </button>
                <button
                  className={`btn ms-2 ${
                    !isSignIn ? "btn-primary" : "btn-outline-primary"
                  }`}
                  onClick={() => setIsSignIn(false)}
                >
                  Sign Up
                </button>
              </div>
              {isSignIn ? <SignInForm /> : <SignUpForm />}
            </div>
          </div>
        </div>
      </div>
    </div>
  );
};

export default SigninSignup;
