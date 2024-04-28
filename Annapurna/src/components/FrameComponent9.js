import { useMemo } from "react";
import "./FrameComponent9.css";

const FrameComponent = ({ propPadding }) => {
  const frameDiv17Style = useMemo(() => {
    return {
      padding: propPadding,
    };
  }, [propPadding]);

  return (
    <div className="frame-parent40" style={frameDiv17Style}>
      <div className="component-63-wrapper">
        <div className="component-63">
          <div className="component-63-child" />
          <img className="food-icon1" alt="" src="/food1.svg" />
        </div>
      </div>
      <div className="prepared-food1">Prepared Food</div>
    </div>
  );
};

export default FrameComponent;
