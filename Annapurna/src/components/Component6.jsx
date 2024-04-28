import { useMemo } from "react";
import "./Component6.css";

const Component6 = ({
  propDebugCommit,
  propDebugCommit1,
  onRectangleClick,
}) => {
  const frameDiv7Style = useMemo(() => {
    return {
      debugCommit: propDebugCommit,
    };
  }, [propDebugCommit]);

  const sept1522Style = useMemo(() => {
    return {
      debugCommit: propDebugCommit1,
    };
  }, [propDebugCommit1]);

  return (
    <div className="component-6">
      <div className="component-6-child" onClick={onRectangleClick} />
      <img
        className="component-6-item"
        loading="lazy"
        alt=""
        src="/rectangle-19@2x.png"
      />
      <div className="frame-parent19">
        <div className="veg-rice-curry-parent" style={frameDiv7Style}>
          <b className="veg-rice-curry2">Veg Rice Curry</b>
          <div className="category-prepared">Category : Prepared Food</div>
        </div>
        <div className="sept-15-22-wrapper">
          <b className="sept-15-22" style={sept1522Style}>
            Sept 15, 22
          </b>
        </div>
      </div>
      <img className="vector-icon19" loading="lazy" alt="" src="/vector1.svg" />
    </div>
  );
};

export default Component6;
