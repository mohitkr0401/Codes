import { useCallback } from "react";
import { useNavigate } from "react-router-dom";
import "./FrameComponent11.css";

const FrameComponent1 = () => {
  const navigate = useNavigate();

  const onVectorIconClick = useCallback(() => {
    navigate("/profile-page");
  }, [navigate]);

  const onComponent3ContainerClick = useCallback(() => {
    navigate("/search-page");
  }, [navigate]);

  return (
    <header className="rectangle-parent30">
      <div className="frame-child52" />
      <div className="vector-group">
        <img
          className="vector-icon25"
          loading="lazy"
          alt=""
          src="/vector4.svg"
          onClick={onVectorIconClick}
        />
        <b className="donate5">Donate</b>
      </div>
      <div className="component-3-parent">
        <div className="component-31" onClick={onComponent3ContainerClick}>
          <div className="search-box" />
          <div className="search-an-organisation">New, Delhi -110001</div>
          <img className="group-icon" alt="" src="/group.svg" />
        </div>
        <img className="vector-icon26" alt="" src="/vector-6.svg" />
      </div>
    </header>
  );
};

export default FrameComponent1;
