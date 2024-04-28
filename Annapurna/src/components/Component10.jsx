import { useMemo } from "react";
import Component11 from "./Component11";
import "./Component10.css";

const Component10 = ({
  showEnterYourFull,
  propHeight,
  propWidth,
  propDisplay,
  propFlexDirection,
  propPosition,
  propHeight1,
  propWidth1,
  propTop,
  propRight,
  propBottom,
  propLeft,
  propPadding,
  propAlignSelf,
  propFlex,
  propHeight2,
  propWidth2,
  propPosition1,
  propMargin,
  propTop1,
  propRight1,
  propBottom1,
  propLeft1,
  propAlignSelf1,
  propFlex1,
  propHeight3,
  propHeight4,
  propWidth3,
  propTop2,
  propRight2,
  propBottom2,
  propLeft2,
  propOverflow,
  propMaxHeight,
  propMargin1,
}) => {
  const fullNameLabelStyle = useMemo(() => {
    return {
      height: propHeight,
      width: propWidth,
      display: propDisplay,
      flexDirection: propFlexDirection,
    };
  }, [propHeight, propWidth, propDisplay, propFlexDirection]);

  const component41Style = useMemo(() => {
    return {
      position: propPosition,
      height: propHeight1,
      width: propWidth1,
      top: propTop,
      right: propRight,
      bottom: propBottom,
      left: propLeft,
      padding: propPadding,
      alignSelf: propAlignSelf,
      flex: propFlex,
    };
  }, [
    propPosition,
    propHeight1,
    propWidth1,
    propTop,
    propRight,
    propBottom,
    propLeft,
    propPadding,
    propAlignSelf,
    propFlex,
  ]);

  const rectangleDiv4Style = useMemo(() => {
    return {
      height: propHeight2,
      width: propWidth2,
      position: propPosition1,
      margin: propMargin,
      top: propTop1,
      right: propRight1,
      bottom: propBottom1,
      left: propLeft1,
      alignSelf: propAlignSelf1,
      flex: propFlex1,
    };
  }, [
    propHeight2,
    propWidth2,
    propPosition1,
    propMargin,
    propTop1,
    propRight1,
    propBottom1,
    propLeft1,
    propAlignSelf1,
    propFlex1,
  ]);

  const enterYourFullStyle = useMemo(() => {
    return {
      height: propHeight3,
    };
  }, [propHeight3]);

  const vectorIconStyle = useMemo(() => {
    return {
      height: propHeight4,
      width: propWidth3,
      top: propTop2,
      right: propRight2,
      bottom: propBottom2,
      left: propLeft2,
      overflow: propOverflow,
      maxHeight: propMaxHeight,
      margin: propMargin1,
    };
  }, [
    propHeight4,
    propWidth3,
    propTop2,
    propRight2,
    propBottom2,
    propLeft2,
    propOverflow,
    propMaxHeight,
    propMargin1,
  ]);

  return (
    <div className="full-name-label2" style={fullNameLabelStyle}>
      <Component11
        enterYourFullName="Enter your Password"
        propFlex="unset"
        propPosition="absolute"
        propHeight="100%"
        propWidth="100%"
        propTop="0%"
        propRight="0%"
        propBottom="0%"
        propLeft="0%"
      />
      <img
        className="vector-icon24"
        alt=""
        src="/vector3.svg"
        style={vectorIconStyle}
      />
    </div>
  );
};

export default Component10;
