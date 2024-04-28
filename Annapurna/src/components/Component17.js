import { useMemo } from "react";
import "./Component17.css";

const Component = ({
  propAlignSelf,
  propFlex,
  propDebugCommit,
  propDebugCommit1,
  onComponent67ContainerClick,
}) => {
  const component67Style = useMemo(() => {
    return {
      alignSelf: propAlignSelf,
      flex: propFlex,
    };
  }, [propAlignSelf, propFlex]);

  const vectorIcon1Style = useMemo(() => {
    return {
      debugCommit: propDebugCommit,
    };
  }, [propDebugCommit]);

  const donateAgainStyle = useMemo(() => {
    return {
      debugCommit: propDebugCommit1,
    };
  }, [propDebugCommit1]);

  return (
    <div
      className="component-67"
      onClick={onComponent67ContainerClick}
      style={component67Style}
    >
      <div className="component-67-child" />
      <img
        className="component-67-item"
        loading="lazy"
        alt=""
        src="/rectangle-86@2x.png"
      />
      <div className="people-container">
        <div className="weshare-group">
          <b className="weshare1">{`WeShare `}</b>
          <div className="people-number">
            <img
              className="people-icon2"
              loading="lazy"
              alt=""
              src="/people.svg"
            />
            <div className="info-label">
              <b className="call-to-action">150</b>
            </div>
          </div>
          <div className="frame-wrapper22">
            <div className="vector-parent5">
              <img
                className="vector-icon45"
                loading="lazy"
                alt=""
                src="/vector7.svg"
              />
              <div className="km2">1.5 KM</div>
            </div>
          </div>
        </div>
      </div>
      <div className="component-67-inner" />
      <div className="component-67-inner1">
        <div className="frame-parent41">
          <div className="vector-frame">
            <img
              className="vector-icon46"
              loading="lazy"
              alt=""
              src="/vector-1.svg"
              style={vectorIcon1Style}
            />
          </div>
          <div className="donate-again1" style={donateAgainStyle}>
            Donate again
          </div>
        </div>
      </div>
    </div>
  );
};

export default Component;
