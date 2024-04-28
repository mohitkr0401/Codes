import { useCallback } from "react";
import Component11 from "../components/Component11";
import Component10 from "../components/Component10";
import Component9 from "../components/Component9";
import { useNavigate } from "react-router-dom";
import FrameComponent3 from "../components/FrameComponent3";
import "./Register.css";

const Register = () => {
  const navigate = useNavigate();

  const onRegisterLabelClick = useCallback(() => {
    navigate("/");
  }, [navigate]);

  const onAlreadyHaveAnClick = useCallback(() => {
    navigate("/login");
  }, [navigate]);

  return (
    <div className="register1">
      <div className="register-inner">
        <div className="create-to-your-parent">
          <h1 className="create-to-your">Create to your</h1>
          <div className="name-field">
            <h1 className="account1">Account</h1>
          </div>
        </div>
      </div>
      <section className="register-child">
        <div className="rectangle-container">
          <img
            className="frame-inner"
            loading="lazy"
            alt=""
            src="/rectangle-60@2x.png"
          />
          <form className="frame-form">
            <div className="rectangle-div" />
            <div className="your-name-field">
              <div className="full-name-label">
                <Component11 enterYourFullName="Enter your Full Name" />
              </div>
              <div className="full-name-label1">
                <Component11
                  enterYourFullName="Enter your email"
                  propFlex="1"
                  propPosition="relative"
                  propHeight="unset"
                  propWidth="unset"
                  propTop="unset"
                  propRight="unset"
                  propBottom="unset"
                  propLeft="unset"
                />
              </div>
              <Component10 showEnterYourFull />
              <Component9 />
            </div>
            <div className="frame-parent1">
              <div className="register-label-parent">
                <div
                  className="register-label1"
                  onClick={onRegisterLabelClick}
                />
                <b className="register2">Register</b>
              </div>
              <FrameComponent3
                orSignInWith="Or Register With"
                propGap="8px"
                propPadding="0px var(--padding-xl) 0px var(--padding-21xl)"
                propWidth="146px"
                propDisplay="inline-block"
              />
            </div>
          </form>
        </div>
      </section>
      <div className="forgot-password-label">
        <div className="already-have-account-label-parent">
          <div className="already-have-account-label">
            <div className="already-have-an" onClick={onAlreadyHaveAnClick}>
              Already have an account?
            </div>
          </div>
          <b className="login2">Login</b>
        </div>
      </div>
    </div>
  );
};

export default Register;
