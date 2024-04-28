import { useCallback } from "react";
import { useNavigate } from "react-router-dom";
import "./Onboarding.css";

const Onboarding = () => {
  const navigate = useNavigate();

  const onRectangleClick = useCallback(() => {
    navigate("/splash");
  }, [navigate]);

  return (
    <div className="onboarding3">
      <img className="onboarding3-child" alt="" src="/rectangle-69@2x.png" />
      <div className="onboarding3-inner">
        <div className="ellipse-parent">
          <div className="ellipse-div" />
          <div className="ellipse-group">
            <div className="frame-child8" />
            <div className="frame-child9" />
          </div>
        </div>
      </div>
      <div className="rectangle-parent5">
        <div className="frame-child10" onClick={onRectangleClick} />
        <b className="get-started">Get Started</b>
      </div>
    </div>
  );
};

export default Onboarding;
