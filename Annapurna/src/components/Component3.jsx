import { useCallback } from "react";
import { useNavigate } from "react-router-dom";
import "./Component3.css";

const Component3 = () => {
  const navigate = useNavigate();

  const onRECTANGLEOptionsButtClick = useCallback(() => {
    navigate("/description");
  }, [navigate]);

  return (
    <div className="component-5">
      <div className="rectangle-parent20">
        <div className="frame-child40" />
        <div className="frame-child41" />
      </div>
      <img className="vector-icon13" loading="lazy" alt="" src="/vector.svg" />
      <div className="the-food-you1">the food you can share xyz.......</div>
      <div className="component-header">
        <img
          className="r-e-c-t-a-n-g-l-e-content-area"
          loading="lazy"
          alt=""
          src="/rectangle-6@2x.png"
        />
        <div className="f-r-a-m-e-organization-details">
          <b className="the-food-center1">The Food Center</b>
        </div>
      </div>
      <div className="f-r-a-m-e-user-location-servic-wrapper">
        <div className="f-r-a-m-e-user-location-servic">
          <div
            className="r-e-c-t-a-n-g-l-e-options-butt"
            onClick={onRECTANGLEOptionsButtClick}
          />
          <b className="donate2">Donate</b>
        </div>
      </div>
    </div>
  );
};

export default Component3;
