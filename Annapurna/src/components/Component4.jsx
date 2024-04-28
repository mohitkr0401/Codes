import { useCallback } from "react";
import { useNavigate } from "react-router-dom";
import "./Component4.css";

const Component4 = () => {
  const navigate = useNavigate();

  const onRectangleClick = useCallback(() => {
    navigate("/description");
  }, [navigate]);

  return (
    <div className="component-4">
      <div className="the-food-you">the food you can share xyz.......</div>
      <div className="frame-parent14">
        <div className="f-r-a-m-e-food-item-details-parent">
          <div className="f-r-a-m-e-food-item-details" />
          <div className="frame-child38" />
        </div>
        <img
          className="f-r-a-m-ethefood-you-can-share"
          loading="lazy"
          alt=""
          src="/rectangle-6@2x.png"
        />
      </div>
      <div className="component-4-inner">
        <div className="frame-parent15">
          <div className="the-food-center-parent">
            <b className="the-food-center">The Food Center</b>
            <img
              className="vector-icon12"
              loading="lazy"
              alt=""
              src="/vector.svg"
            />
          </div>
          <div className="frame-wrapper7">
            <div className="rectangle-parent19">
              <div className="frame-child39" onClick={onRectangleClick} />
              <b className="donate1">Donate</b>
            </div>
          </div>
        </div>
      </div>
    </div>
  );
};

export default Component4;
