import { useCallback } from "react";
import { useNavigate } from "react-router-dom";
import "./Component31.css";

const Component3 = () => {
  const navigate = useNavigate();

  const onComponent32ContainerClick = useCallback(() => {
    navigate("/login");
  }, [navigate]);

  return (
    <div className="component-32" onClick={onComponent32ContainerClick}>
      <b className="already-a-member">Already a member?</b>
      <b className="login3">Login</b>
    </div>
  );
};

export default Component3;
