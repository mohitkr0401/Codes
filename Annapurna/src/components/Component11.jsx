import { useMemo } from "react";
import "./Component11.css";

const Component11 = ({
  enterYourFullName,
  propFlex,
  propPosition,
  propHeight,
  propWidth,
  propTop,
  propRight,
  propBottom,
  propLeft,
}) => {
  const component41Style = useMemo(() => {
    return {
      flex: propFlex,
      position: propPosition,
      height: propHeight,
      width: propWidth,
      top: propTop,
      right: propRight,
      bottom: propBottom,
      left: propLeft,
    };
  }, [
    propFlex,
    propPosition,
    propHeight,
    propWidth,
    propTop,
    propRight,
    propBottom,
    propLeft,
  ]);

  return (
    <div className="component-41" style={component41Style}>
      <div className="component-41-child" />
      <div className="enter-your-full">{enterYourFullName}</div>
    </div>
  );
};

export default Component11;
