import Component4 from "./Component4";
import Component3 from "./Component3";
import "./FrameComponent31.css";

const FrameComponent3 = () => {
  return (
    <section className="splash-inner">
      <div className="frame-parent31">
        <div className="welcome-to-annapurna-parent">
          <h1 className="welcome-to-annapurna">Welcome to Annapurna</h1>
          <div className="share-your-food">
            Share your food with whom who need
          </div>
        </div>
        <div className="component-31-parent">
          <Component4 />
          <div className="component-32-wrapper">
            <Component3 />
          </div>
        </div>
      </div>
    </section>
  );
};

export default FrameComponent3;
