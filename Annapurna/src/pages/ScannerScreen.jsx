import { useCallback } from "react";
import { useNavigate } from "react-router-dom";
import FrameComponent4 from "../components/FrameComponent4";
import "./ScannerScreen.css";

const ScannerScreen = () => {
  const navigate = useNavigate();

  const onRectangleImageClick = useCallback(() => {
    navigate("/my-donations");
  }, [navigate]);

  return (
    <div className="scanner-screen">
      <img
        className="scanner-screen-child"
        alt=""
        src="/rectangle-10@2x.png"
        onClick={onRectangleImageClick}
      />
      <div className="rectangle-group">
        <div className="frame-item" />
        <div className="vector-wrapper">
          <img className="vector-icon" alt="" src="/vector2.svg" />
        </div>
        <b className="flash">Flash</b>
      </div>
      <FrameComponent4 />
    </div>
  );
};

export default ScannerScreen;
