import { useMemo } from "react";
import "./Component15.css";

const Component1 = ({
  propLeft,
  propTop,
  propAlignSelf,
  propFlex,
  propAlignSelf1,
  propWidth,
  propFlex1,
  propAlignSelf2,
  propDisplay,
  propMinWidth,
  propFlex2,
  onRectangleClick,
}) => {
  const component47Style = useMemo(() => {
    return {
      left: propLeft,
      top: propTop,
    };
  }, [propLeft, propTop]);

  const frameDiv12Style = useMemo(() => {
    return {
      alignSelf: propAlignSelf,
    };
  }, [propAlignSelf]);

  const frameDiv13Style = useMemo(() => {
    return {
      flex: propFlex,
    };
  }, [propFlex]);

  const theFoodCenter1Style = useMemo(() => {
    return {
      alignSelf: propAlignSelf1,
    };
  }, [propAlignSelf1]);

  const frameDiv14Style = useMemo(() => {
    return {
      width: propWidth,
    };
  }, [propWidth]);

  const frameDiv15Style = useMemo(() => {
    return {
      flex: propFlex1,
    };
  }, [propFlex1]);

  const frameDiv16Style = useMemo(() => {
    return {
      alignSelf: propAlignSelf2,
    };
  }, [propAlignSelf2]);

  const kMStyle = useMemo(() => {
    return {
      display: propDisplay,
      minWidth: propMinWidth,
      flex: propFlex2,
    };
  }, [propDisplay, propMinWidth, propFlex2]);

  return (
    <div className="component-47" style={component47Style}>
      <div className="component-47-child" onClick={onRectangleClick} />
      <img
        className="component-47-item"
        loading="lazy"
        alt=""
        src="/rectangle-66@2x.png"
      />
      <div className="component-47-inner" style={frameDiv12Style}>
        <div className="the-food-center-parent2" style={frameDiv13Style}>
          <b className="the-food-center5" style={theFoodCenter1Style}>
            The Food Center
          </b>
          <div className="frame-wrapper21" style={frameDiv14Style}>
            <div className="frame-parent39" style={frameDiv15Style}>
              <div className="vector-parent4" style={frameDiv16Style}>
                <img className="vector-icon44" alt="" src="/vector.svg" />
                <div className="km1" style={kMStyle}>
                  1.5 KM
                </div>
              </div>
              <div className="people-group">
                <img
                  className="people-icon1"
                  loading="lazy"
                  alt=""
                  src="/people1.svg"
                />
                <div className="frame">
                  <div className="div">100</div>
                </div>
              </div>
            </div>
          </div>
        </div>
      </div>
    </div>
  );
};

export default Component1;
