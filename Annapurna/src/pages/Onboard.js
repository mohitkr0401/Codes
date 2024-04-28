import { useCallback } from "react";
import { useNavigate } from "react-router-dom";
import Component3 from "../components/Component3";
import Component57Icon from "../components/Component57Icon";
import Component2 from "../components/Component2";
import "./Onboard.css";

const Onboard = () => {
  const navigate = useNavigate();

  const onComponent55ContainerClick = useCallback(() => {
    navigate("/splash");
  }, [navigate]);

  const onComponent55Container2Click = useCallback(() => {
    navigate("/onboarding3");
  }, [navigate]);

  return (
    <div className="onboard-2">
      <img className="onboard-2-child" alt="" src="/rectangle-69@2x.png" />
      <Component3 onComponent53ContainerClick={onComponent55ContainerClick} />
      <section className="onboard-2-inner">
        <div className="frame-parent6">
          <div className="component-57-wrapper">
            <Component57Icon />
          </div>
          <Component2
            propFlex="unset"
            propAlignSelf="stretch"
            onComponent54ContainerClick={onComponent55Container2Click}
          />
        </div>
      </section>
    </div>
  );
};

export default Onboard;
