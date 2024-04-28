import { useMemo } from "react";
import "./Component1.css";

const Component1 = ({
  propWidth,
  propRight,
  propWidth1,
  propRight1,
  propWidth2,
  propRight2,
  propHeight,
  propWidth3,
  propFlex,
  propWidth4,
  propAlignSelf,
  propWidth5,
  propHeight1,
  propDisplay,
  propPadding,
  propWidth6,
  propFlex1,
  propDisplay1,
  propMinWidth,
  onRectangle6Click,
}) => {
  const frameDiv1Style = useMemo(() => {
    return {
      width: propWidth,
      right: propRight,
    };
  }, [propWidth, propRight]);

  const rectangleDiv2Style = useMemo(() => {
    return {
      width: propWidth1,
      right: propRight1,
    };
  }, [propWidth1, propRight1]);

  const rectangleDiv3Style = useMemo(() => {
    return {
      width: propWidth2,
      right: propRight2,
    };
  }, [propWidth2, propRight2]);

  const theFoodYouStyle = useMemo(() => {
    return {
      height: propHeight,
    };
  }, [propHeight]);

  const frameDiv2Style = useMemo(() => {
    return {
      width: propWidth3,
    };
  }, [propWidth3]);

  const frameDiv3Style = useMemo(() => {
    return {
      flex: propFlex,
      width: propWidth4,
    };
  }, [propFlex, propWidth4]);

  const frameDiv4Style = useMemo(() => {
    return {
      alignSelf: propAlignSelf,
      width: propWidth5,
    };
  }, [propAlignSelf, propWidth5]);

  const theFoodCenterStyle = useMemo(() => {
    return {
      height: propHeight1,
      display: propDisplay,
    };
  }, [propHeight1, propDisplay]);

  const frameDiv5Style = useMemo(() => {
    return {
      padding: propPadding,
    };
  }, [propPadding]);

  const frameDiv6Style = useMemo(() => {
    return {
      width: propWidth6,
    };
  }, [propWidth6]);

  const donate1Style = useMemo(() => {
    return {
      flex: propFlex1,
      display: propDisplay1,
      minWidth: propMinWidth,
    };
  }, [propFlex1, propDisplay1, propMinWidth]);

  return (
    <div className="component-51">
      <div className="rectangle-parent21" style={frameDiv1Style}>
        <div className="frame-child42" style={rectangleDiv2Style} />
        <div className="frame-child43" style={rectangleDiv3Style} />
      </div>
      <div className="the-food-you3" style={theFoodYouStyle}>
        the food you can share xyz.......
      </div>
      <img
        className="component-5-child"
        loading="lazy"
        alt=""
        src="/rectangle-6@2x.png"
      />
      <div className="component-5-inner" style={frameDiv2Style}>
        <div className="frame-parent17" style={frameDiv3Style}>
          <div className="the-food-center-container" style={frameDiv4Style}>
            <b className="the-food-center3" style={theFoodCenterStyle}>
              The Food Center
            </b>
            <img
              className="vector-icon14"
              loading="lazy"
              alt=""
              src="/vector.svg"
            />
          </div>
          <div className="frame-wrapper8" style={frameDiv5Style}>
            <div className="rectangle-parent22" style={frameDiv6Style}>
              <div className="frame-child44" onClick={onRectangle6Click} />
              <b className="donate4" style={donate1Style}>
                Donate
              </b>
            </div>
          </div>
        </div>
      </div>
    </div>
  );
};

export default Component1;
