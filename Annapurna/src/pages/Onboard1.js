import { useCallback } from "react";
import { useNavigate } from "react-router-dom";
import Component56Icon from "../components/Component56Icon";
import Component3 from "../components/Component3";
import Component2 from "../components/Component2";
import "./Onboard1.css";

const Onboard1 = () => {
  const navigate = useNavigate();

  const onComponent53ContainerClick = useCallback(() => {
    navigate("/splash");
  }, [navigate]);

  const onComponent54ContainerClick = useCallback(() => {
    navigate("/onboard-2");
  }, [navigate]);

  return (
    <div className="onboard-1">
      <Component56Icon />
      <Component3 onComponent53ContainerClick={onComponent53ContainerClick} />
      <div className="component-54-wrapper">
        <Component2 onComponent54ContainerClick={onComponent54ContainerClick} />
      </div>
    </div>
  );
};

export default Onboard1;
