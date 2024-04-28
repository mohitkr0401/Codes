import FrameComponent3 from "../components/FrameComponent3";
import "./Splash.css";

const Splash = () => {
  return (
    <div className="splash">
      <section className="rectangle-parent4">
        <img className="rectangle-icon" alt="" src="/rectangle-49@2x.png" />
        <img
          className="frame-child7"
          loading="lazy"
          alt=""
          src="/rectangle-49@2x.png"
        />
      </section>
      <FrameComponent3 />
    </div>
  );
};

export default Splash;
