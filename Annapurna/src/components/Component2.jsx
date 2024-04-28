import { useMemo } from "react";
import "./Component2.css";

const Component2 = ({
  propPadding,
  propDebugCommit,
  propHeight,
  propBottom,
  propHeight1,
  propWidth,
  propRight,
  propBottom1,
  propHeight2,
  propWidth1,
  propRight1,
  propBottom2,
  propHeight3,
  propPadding1,
  propDebugCommit1,
  propDebugCommit2,
  onRectangle4Click,
}) => {
  const component3Style = useMemo(() => {
    return {
      padding: propPadding,
      debugCommit: propDebugCommit,
    };
  }, [propPadding, propDebugCommit]);

  const componentInstanceStyle = useMemo(() => {
    return {
      height: propHeight,
      bottom: propBottom,
    };
  }, [propHeight, propBottom]);

  const rectangleDivStyle = useMemo(() => {
    return {
      height: propHeight1,
      width: propWidth,
      right: propRight,
      bottom: propBottom1,
    };
  }, [propHeight1, propWidth, propRight, propBottom1]);

  const rectangleDiv1Style = useMemo(() => {
    return {
      height: propHeight2,
      width: propWidth1,
      right: propRight1,
      bottom: propBottom2,
    };
  }, [propHeight2, propWidth1, propRight1, propBottom2]);

  const foodCanStyle = useMemo(() => {
    return {
      height: propHeight3,
      padding: propPadding1,
    };
  }, [propHeight3, propPadding1]);

  const frameDivStyle = useMemo(() => {
    return {
      debugCommit: propDebugCommit1,
    };
  }, [propDebugCommit1]);

  const donateStyle = useMemo(() => {
    return {
      debugCommit: propDebugCommit2,
    };
  }, [propDebugCommit2]);

  return (
    <div className="component-3" style={component3Style}>
      <div className="component-instance2" style={componentInstanceStyle}>
        <div className="component-instance-child" style={rectangleDivStyle} />
        <div className="component-instance-item" style={rectangleDiv1Style} />
      </div>
      <img
        className="component-3-child"
        loading="lazy"
        alt=""
        src="/rectangle-6@2x.png"
      />
      <div className="food-can-wrapper">
        <div className="food-can" style={foodCanStyle}>
          <div className="the-food-center-group" style={frameDivStyle}>
            <b className="the-food-center2">The Food Center</b>
            <div className="frame-parent16">
              <div className="change-button-wrapper">
                <img
                  className="change-button-icon"
                  loading="lazy"
                  alt=""
                  src="/vector.svg"
                />
              </div>
              <div className="the-food-you2">
                the food you can share xyz.......
              </div>
            </div>
          </div>
          <div className="food-can-inner">
            <div className="component-parent">
              <div className="component" onClick={onRectangle4Click} />
              <b className="donate3" style={donateStyle}>
                Donate
              </b>
            </div>
          </div>
        </div>
      </div>
    </div>
  );
};

export default Component2;
