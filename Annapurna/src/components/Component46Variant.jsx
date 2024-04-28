import { useCallback } from "react";
import { useNavigate } from "react-router-dom";
import "./Component46Variant.css";

const Component46Variant = () => {
  const navigate = useNavigate();

  const onVectorIconClick = useCallback(() => {
    navigate("/ngos");
  }, [navigate]);

  const onVectorIcon1Click = useCallback(() => {
    navigate("/profile-page");
  }, [navigate]);

  const onVectorIcon3Click = useCallback(() => {
    navigate("/chat-screen");
  }, [navigate]);

  return (
    <div className="component-46variant2">
      <div className="rectangle-parent23">
        <div className="instance-child" />
        <img
          className="vector-icon15"
          loading="lazy"
          alt=""
          src="/vector-7.svg"
          onClick={onVectorIconClick}
        />
        <img
          className="vector-icon16"
          loading="lazy"
          alt=""
          src="/vector-8.svg"
          onClick={onVectorIcon1Click}
        />
        <img
          className="vector-icon17"
          loading="lazy"
          alt=""
          src="/vector-9.svg"
        />
      </div>
      <img
        className="vector-icon18"
        loading="lazy"
        alt=""
        src="/vector-10.svg"
        onClick={onVectorIcon3Click}
      />
    </div>
  );
};

export default Component46Variant;
