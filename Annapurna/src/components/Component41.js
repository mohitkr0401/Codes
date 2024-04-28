import { useCallback } from "react";
import { useNavigate } from "react-router-dom";
import "./Component41.css";

const Component4 = () => {
  const navigate = useNavigate();

  const onComponent31ContainerClick = useCallback(() => {
    navigate("/");
  }, [navigate]);

  return (
    <div className="component-311" onClick={onComponent31ContainerClick}>
      <div className="component-31-child" />
      <b className="donate-as-a">Donate as a Guest</b>
    </div>
  );
};

export default Component4;
