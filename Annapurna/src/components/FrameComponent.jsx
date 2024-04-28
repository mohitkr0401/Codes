import { useCallback } from "react";
import Component from "./Component";
import { useNavigate } from "react-router-dom";
import "./FrameComponent.css";

const FrameComponent = () => {
  const navigate = useNavigate();

  const onComponent58IconClick = useCallback(() => {
    navigate("/search-page");
  }, [navigate]);

  const onComponent59IconClick = useCallback(() => {
    navigate("/notification-screen");
  }, [navigate]);

  return (
    <section className="frame-parent18">
      <div className="component-group">
        <div className="component1">
          <Component />
        </div>
        <div className="wrapper-component-58">
          <img
            className="component-58-icon"
            loading="lazy"
            alt=""
            src="/component-58.svg"
            onClick={onComponent58IconClick}
          />
        </div>
        <img
          className="component-59-icon"
          loading="lazy"
          alt=""
          src="/component-59.svg"
          onClick={onComponent59IconClick}
        />
      </div>
      <img
        className="frame-child45"
        loading="lazy"
        alt=""
        src="/rectangle-73@2x.png"
      />
    </section>
  );
};

export default FrameComponent;
