import { useMemo } from "react";
import Component5 from "./Component5";
import "./FrameComponent41.css";

const FrameComponent4 = ({
  component23,
  component24,
  component26,
  propPadding,
}) => {
  const frameSectionStyle = useMemo(() => {
    return {
      padding: propPadding,
    };
  }, [propPadding]);

  return (
    <section className="chat-screen-inner4" style={frameSectionStyle}>
      <div className="frame-parent36">
        <div className="component-23-parent">
          <img
            className="component-23-icon"
            loading="lazy"
            alt=""
            src={component23}
          />
          <div className="component-22-wrapper">
            <Component5
              propAlignSelf="stretch"
              propFlex="unset"
              propMarginLeft="unset"
            />
          </div>
        </div>
        <div className="frame-wrapper17">
          <div className="frame-parent37">
            <div className="rectangle-parent39">
              <div className="frame-child65" />
              <div className="i-want-to6">
                I want to have a chat with my delivery partner
              </div>
            </div>
            <div className="frame-wrapper18">
              <div className="component-24-parent">
                <img className="component-24-icon" alt="" src={component24} />
                <img
                  className="component-26-icon"
                  loading="lazy"
                  alt=""
                  src={component26}
                />
              </div>
            </div>
          </div>
        </div>
      </div>
    </section>
  );
};

export default FrameComponent4;
