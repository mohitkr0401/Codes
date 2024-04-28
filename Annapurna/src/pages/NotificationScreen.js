import { useCallback } from "react";
import { useNavigate } from "react-router-dom";
import Component5 from "../components/Component5";
import "./NotificationScreen.css";

const NotificationScreen = () => {
  const navigate = useNavigate();

  const onVectorIconClick = useCallback(() => {
    navigate("/");
  }, [navigate]);

  return (
    <div className="notification-screen">
      <header className="frame-header">
        <div className="frame-child23" />
        <img
          className="vector-icon4"
          loading="lazy"
          alt=""
          src="/vector4.svg"
          onClick={onVectorIconClick}
        />
        <h3 className="notification">
          <p className="notification1">Notification</p>
        </h3>
      </header>
      <section className="notification-screen-inner">
        <div className="booking-scheduler-parent">
          <Component5 />
          <Component5 />
          <Component5 />
          <Component5 />
          <Component5 />
          <Component5 />
          <Component5 />
          <Component5 />
          <Component5 />
        </div>
      </section>
    </div>
  );
};

export default NotificationScreen;
