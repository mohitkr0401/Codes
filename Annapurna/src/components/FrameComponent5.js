import { useCallback } from "react";
import { useNavigate } from "react-router-dom";
import "./FrameComponent5.css";

const FrameComponent = () => {
  const navigate = useNavigate();

  const onRectangleClick = useCallback(() => {
    navigate("/scanner-screen");
  }, [navigate]);

  return (
    <div className="scan-food-quality-parent">
      <div className="scan-food-quality">
        <b className="scan-your-food">Scan your food fir quality check</b>
      </div>
      <div className="add-button">
        <div className="rectangle-parent33">
          <div className="frame-child55" onClick={onRectangleClick} />
          <img className="add-icon" loading="lazy" alt="" src="/add.svg" />
        </div>
        <img
          className="add-button-child"
          loading="lazy"
          alt=""
          src="/rectangle-26@2x.png"
        />
        <div className="add-button-inner">
          <img
            className="frame-child56"
            loading="lazy"
            alt=""
            src="/rectangle-26@2x.png"
          />
        </div>
      </div>
    </div>
  );
};

export default FrameComponent;
