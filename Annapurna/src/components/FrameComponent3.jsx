import { useMemo } from "react";
import Component7 from "./Component7";
import "./FrameComponent3.css";

const FrameComponent3 = ({
  orSignInWith,
  propGap,
  propPadding,
  propWidth,
  propDisplay,
}) => {
  const frameDiv8Style = useMemo(() => {
    return {
      gap: propGap,
    };
  }, [propGap]);

  const frameDiv9Style = useMemo(() => {
    return {
      padding: propPadding,
    };
  }, [propPadding]);

  const orSignInStyle = useMemo(() => {
    return {
      width: propWidth,
      display: propDisplay,
    };
  }, [propWidth, propDisplay]);

  return (
    <div className="frame-parent23" style={frameDiv8Style}>
      <div className="or-sign-in-with-wrapper" style={frameDiv9Style}>
        <b className="or-sign-in" style={orSignInStyle}>
          {orSignInWith}
        </b>
      </div>
      <Component7 />
    </div>
  );
};

export default FrameComponent3;
