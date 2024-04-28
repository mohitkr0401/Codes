import { useCallback } from "react";
import { useNavigate } from "react-router-dom";
import "./Component5.css";

const Component5 = () => {
  const navigate = useNavigate();

  const onRectangleClick = useCallback(() => {
    navigate("/donation-details");
  }, [navigate]);

  return (
    <div className="component-9">
      <div className="component-9-child" onClick={onRectangleClick} />
      <div className="rectangle-parent24">
        <img className="frame-child46" alt="" src="/rectangle-19@2x.png" />
        <div className="frame-wrapper9">
          <div className="veg-rice-curry-group">
            <b className="veg-rice-curry3">Veg Rice Curry</b>
            <div className="category-prepared1">Category : Prepared Food</div>
          </div>
        </div>
      </div>
      <div className="sept-15-22-container">
        <b className="sept-15-221">Sept 15, 22</b>
      </div>
      <img className="vector-icon20" loading="lazy" alt="" src="/vector1.svg" />
    </div>
  );
};

export default Component5;
