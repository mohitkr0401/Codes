import "./Component.css";

const Component = () => {
  return (
    <div className="component-1">
      <img
        className="food-center-logo"
        loading="lazy"
        alt=""
        src="/vector-6.svg"
      />
      <div className="user-location-parent">
        <b className="user-location">User Location</b>
        <b className="change">
          <p className="change1">change</p>
        </b>
      </div>
    </div>
  );
};

export default Component;
