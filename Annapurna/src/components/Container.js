import { useCallback } from "react";
import Component60Icon from "./Component60Icon";
import { useNavigate } from "react-router-dom";
import "./Container.css";

const Container = () => {
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
    <section className="container">
      <div className="wrapper-component-60">
        <Component60Icon />
      </div>
      <footer className="component-46variant22">
        <div className="rectangle-parent40">
          <div className="instance-inner" />
          <img
            className="vector-icon33"
            loading="lazy"
            alt=""
            src="/vector-7.svg"
            onClick={onVectorIconClick}
          />
          <img
            className="vector-icon34"
            loading="lazy"
            alt=""
            src="/vector-8.svg"
            onClick={onVectorIcon1Click}
          />
          <img
            className="vector-icon35"
            loading="lazy"
            alt=""
            src="/vector-21.svg"
            onClick={onVectorIcon2Click}
          />
        </div>
        <img
          className="vector-icon36"
          loading="lazy"
          alt=""
          src="/vector-31.svg"
          onClick={onVectorIcon3Click}
        />
      </footer>
    </section>
  );
};

export default Container;
