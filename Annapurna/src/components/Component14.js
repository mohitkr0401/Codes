import { useMemo } from "react";
import "./Component14.css";

const Component = ({
  propFlex,
  propAlignSelf,
  propRowGap,
  propHeight,
  propAlignSelf1,
  propMinWidth,
}) => {
  const component33Style = useMemo(() => {
    return {
      flex: propFlex,
      alignSelf: propAlignSelf,
      rowGap: propRowGap,
    };
  }, [propFlex, propAlignSelf, propRowGap]);

  const frameDiv10Style = useMemo(() => {
    return {
      height: propHeight,
      alignSelf: propAlignSelf1,
    };
  }, [propHeight, propAlignSelf1]);

  const frameDiv11Style = useMemo(() => {
    return {
      minWidth: propMinWidth,
    };
  }, [propMinWidth]);

  return (
    <div className="component-33" style={component33Style}>
      <div className="component-33-child" />
      <div className="component-33-inner" style={frameDiv10Style}>
        <img
          className="frame-child66"
          loading="lazy"
          alt=""
          src="/rectangle-53@2x.png"
        />
      </div>
      <div className="component-33-inner1" style={frameDiv11Style}>
        <div className="weshare-parent">
          <b className="weshare">{`WeShare `}</b>
          <div className="frame-wrapper19">
            <div className="people-parent">
              <img
                className="people-icon"
                loading="lazy"
                alt=""
                src="/people.svg"
              />
              <div className="wrapper">
                <b className="b2">150</b>
              </div>
            </div>
          </div>
          <div className="frame-wrapper20">
            <div className="vector-parent2">
              <img
                className="vector-icon37"
                loading="lazy"
                alt=""
                src="/vector7.svg"
              />
              <div className="km-wrapper">
                <div className="km">1.5 KM</div>
              </div>
            </div>
          </div>
        </div>
      </div>
      <img
        className="vector-icon38"
        loading="lazy"
        alt=""
        src="/vector-1.svg"
      />
      <div className="component-33-inner2">
        <div className="frame-parent38">
          <div className="rectangle-wrapper">
            <div className="frame-child67" />
          </div>
          <div className="call-for-pickup">Call For Pickup</div>
        </div>
      </div>
    </div>
  );
};

export default Component;
