import { useCallback } from "react";
import { useNavigate } from "react-router-dom";
import "./FrameComponent32.css";

const FrameComponent3 = () => {
  const navigate = useNavigate();

  const onVectorIconClick = useCallback(() => {
    navigate("/");
  }, [navigate]);

  const onComponent11ContainerClick = useCallback(() => {
    navigate("/search-page");
  }, [navigate]);

  return (
    <header className="rectangle-parent42">
      <div className="frame-child68" />
      <div className="vector-parent3">
        <img
          className="vector-icon43"
          alt=""
          src="/vector4.svg"
          onClick={onVectorIconClick}
        />
        <b className="search">Search</b>
      </div>
      <div className="component-11-parent">
        <div className="component-111" onClick={onComponent11ContainerClick}>
          <div className="component-11-item" />
          <div className="search-an-organisation1">Search any organization</div>
          <img className="group-icon1" alt="" src="/group1.svg" />
        </div>
        <img className="group-icon2" alt="" src="/group2.svg" />
      </div>
    </header>
  );
};

export default FrameComponent3;
