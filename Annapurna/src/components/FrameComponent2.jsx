import { useCallback } from "react";
import { useNavigate } from "react-router-dom";
import Component6 from "./Component6";
import Component5 from "./Component5";
import "./FrameComponent2.css";

const FrameComponent2 = () => {
  const navigate = useNavigate();

  const onRectangleClick = useCallback(() => {
    navigate("/donation-details");
  }, [navigate]);

  const onRectangle2Click = useCallback(() => {
    navigate("/donation-details");
  }, [navigate]);

  const onRectangle3Click = useCallback(() => {
    navigate("/donation-details");
  }, [navigate]);

  const onVectorIconClick = useCallback(() => {
    navigate("/ngos");
  }, [navigate]);

  const onVectorIcon1Click = useCallback(() => {
    navigate("/profile-page");
  }, [navigate]);

  const onVectorIcon2Click = useCallback(() => {
    navigate("/");
  }, [navigate]);

  const onComponentInstanceIconClick = useCallback(() => {
    navigate("/chat-screen");
  }, [navigate]);

  return (
    <div className="frame-parent20">
      <div className="frame-wrapper10">
        <div className="my-donations-parent">
          <b className="my-donations1">My Donations</b>
          <b className="b1">(12)</b>
        </div>
      </div>
      <div className="veg-rice-curry-name">
        <Component6 onRectangleClick={onRectangleClick} />
        <Component6
          propDebugCommit="unset"
          propDebugCommit1="unset"
          onRectangleClick={onRectangle2Click}
        />
        <Component6
          propDebugCommit="unset"
          propDebugCommit1="unset"
          onRectangleClick={onRectangle3Click}
        />
        <Component5 />
        <footer className="component-46variant21">
          <div className="rectangle-parent25">
            <div className="instance-item" />
            <img
              className="vector-icon21"
              loading="lazy"
              alt=""
              src="/vector-7.svg"
              onClick={onVectorIconClick}
            />
            <img
              className="vector-icon22"
              loading="lazy"
              alt=""
              src="/vector-5.svg"
              onClick={onVectorIcon1Click}
            />
            <img
              className="vector-icon23"
              loading="lazy"
              alt=""
              src="/vector-61.svg"
              onClick={onVectorIcon2Click}
            />
          </div>
          <img
            className="component-instance-icon"
            loading="lazy"
            alt=""
            src="/vector-10.svg"
            onClick={onComponentInstanceIconClick}
          />
        </footer>
      </div>
    </div>
  );
};

export default FrameComponent2;
