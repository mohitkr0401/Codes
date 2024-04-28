import FrameComponent2 from "../components/FrameComponent2";
import FrameComponent1 from "../components/FrameComponent1";
import FrameComponent from "../components/FrameComponent";
import "./Ngos.css";

const Ngos = () => {
  return (
    <div className="ngos">
      <section className="ngos-inner">
        <FrameComponent2 />
      </section>
      <FrameComponent1 />
      <FrameComponent />
    </div>
  );
};

export default Ngos;
