import { useMemo } from "react";
import "./Component23.css";

const Component2 = ({ propWidth, propFlex }) => {
  const component65Style = useMemo(() => {
    return {
      width: propWidth,
      flex: propFlex,
    };
  }, [propWidth, propFlex]);

  return (
    <div className="component-65" style={component65Style}>
      <div className="component-65-child" />
      <div className="div1">22</div>
    </div>
  );
};

export default Component2;
