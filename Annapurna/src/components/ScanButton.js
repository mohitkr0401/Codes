import { useCallback } from "react";
import { useNavigate } from "react-router-dom";
import "./ScanButton.css";

const ScanButton = () => {
  const navigate = useNavigate();

  const onRectangleClick = useCallback(() => {
    navigate("/address");
  }, [navigate]);

  return (
    <footer className="scan-button">
      <div className="assurance-message">
        <div className="frame-parent28">
          <div className="vector-container">
            <img className="vector-icon30" alt="" src="/vector-71.svg" />
          </div>
          <div className="i-assured-that">
            I assured that food quality and hygiene has been assured
          </div>
        </div>
      </div>
      <div className="beverages-label">
        <div className="beverages-label-child" onClick={onRectangleClick} />
        <b className="confirm">confirm</b>
      </div>
    </footer>
  );
};

export default ScanButton;
