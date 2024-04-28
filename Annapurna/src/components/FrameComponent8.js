import { useCallback } from "react";
import { useNavigate } from "react-router-dom";
import Component from "./Component";
import "./FrameComponent8.css";

const FrameComponent = () => {
  const navigate = useNavigate();

  const onVectorIconClick = useCallback(() => {
    navigate("/ngos");
  }, [navigate]);

  const onVectorIcon1Click = useCallback(() => {
    navigate("/profile-page");
  }, [navigate]);

  const onVectorIcon2Click = useCallback(() => {
    navigate("/");
  }, [navigate]);

  const onVectorIcon3Click = useCallback(() => {
    navigate("/chat-screen");
  }, [navigate]);

  return (
    <section className="component-46variant2-parent">
      <div className="component-46variant23">
        <div className="rectangle-parent41">
          <footer className="rectangle-footer" />
          <img
            className="vector-icon39"
            loading="lazy"
            alt=""
            src="/vector-12.svg"
            onClick={onVectorIconClick}
          />
          <img
            className="vector-icon40"
            loading="lazy"
            alt=""
            src="/vector-8.svg"
            onClick={onVectorIcon1Click}
          />
          <img
            className="vector-icon41"
            loading="lazy"
            alt=""
            src="/vector-21.svg"
            onClick={onVectorIcon2Click}
          />
        </div>
        <img
          className="vector-icon42"
          loading="lazy"
          alt=""
          src="/vector-10.svg"
          onClick={onVectorIcon3Click}
        />
      </div>
      <div className="component-34-wrapper">
        <Component
          propFlex="1"
          propAlignSelf="stretch"
          propRowGap="unset"
          propHeight="unset"
          propAlignSelf1="stretch"
          propMinWidth="unset"
        />
      </div>
    </section>
  );
};

export default FrameComponent;
