import ChildComponent from "../components/ChildComponent";
import Component2 from "../components/Component2";
import "./Address.css";

const Address = () => {
  return (
    <div className="address">
      <ChildComponent />
      <div className="address-inner">
        <div className="rectangle-parent1">
          <div className="frame-child4" />
          <img
            className="vector-icon2"
            loading="lazy"
            alt=""
            src="/vector-6.svg"
          />
          <b className="new-delhi-delhi">New Delhi, Delhi - 110001</b>
        </div>
      </div>
      <div className="component-child">
        <Component2 />
      </div>
    </div>
  );
};

export default Address;
