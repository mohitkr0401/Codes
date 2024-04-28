import { useCallback } from "react";
import { useNavigate } from "react-router-dom";
import "./Component21.css";

const Component2 = () => {
  const navigate = useNavigate();

  const onComponent26ContainerClick = useCallback(() => {
    navigate("/");
  }, [navigate]);

  return (
    <div className="component-26" onClick={onComponent26ContainerClick}>
      <div className="component-26-child" />
      <b className="im-here">I’m Here</b>
    </div>
  );
};

export default Component2;
