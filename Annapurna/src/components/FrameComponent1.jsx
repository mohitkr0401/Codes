import { useCallback } from "react";
import { useNavigate } from "react-router-dom";
import Component2 from "./Component2";
import Component1 from "./Component1";
import "./FrameComponent1.css";

const FrameComponent1 = () => {
  const navigate = useNavigate();

  const onComponentClick = useCallback(() => {
    navigate("/description");
  }, [navigate]);

  const onComponentDropdownClick = useCallback(() => {
    navigate("/description");
  }, [navigate]);

  const onRectangleClick = useCallback(() => {
    navigate("/description");
  }, [navigate]);

  return (
    <section className="organizations-near-you-parent">
      <b className="organizations-near-you">Organizations near you</b>
      <div className="f-r-a-m-e-sharing-details">
        <Component2 onRectangle4Click={onComponentClick} />
        <Component1
          propWidth="148px"
          propRight="unset"
          propWidth1="213px"
          propRight1="unset"
          propWidth2="213px"
          propRight2="unset"
          propHeight="unset"
          propWidth3="unset"
          propFlex="unset"
          propWidth4="130px"
          propAlignSelf="unset"
          propWidth5="166px"
          propHeight1="unset"
          propDisplay="unset"
          propPadding="0px var(--padding-9xs)"
          propWidth6="unset"
          propFlex1="unset"
          propDisplay1="inline-block"
          propMinWidth="76px"
          onRectangle6Click={onComponentDropdownClick}
        />
        <Component1 onRectangle6Click={onRectangleClick} />
      </div>
    </section>
  );
};

export default FrameComponent1;
