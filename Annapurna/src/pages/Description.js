import { useCallback } from "react";
import FrameComponent2 from "../components/FrameComponent2";
import { useNavigate } from "react-router-dom";
import "./Description.css";

const Description = () => {
  const navigate = useNavigate();

  const onRectangleClick = useCallback(() => {
    navigate("/my-donations");
  }, [navigate]);

  const onRectangle2Click = useCallback(() => {
    navigate("/chat-screen");
  }, [navigate]);

  return (
    <div className="description">
      <section className="frame-section">
        <FrameComponent2 />
        <div className="about-parent">
          <b className="about">About</b>
          <div className="dummy-text-is-container">
            <p className="dummy-text-is">
              Dummy text is a placeholder text that is used to fill space in a
              document or layout. It is often used in design and development to
              see how a layout will look with text before the final text is
              available. Dummy text is also often used in presentations and
              other materials to give the illusion of a finished product.There
              are many different types of dummy text, but the most common is
              Lorem ipsum. Lorem ipsum is a Latin text that has been used as
              dummy text for centuries. It is made up of meaningless words, but
              it has a natural rhythm and flow to it, which makes it look like
              real text.
            </p>
          </div>
        </div>
      </section>
      <div className="frame-parent5">
        <div className="rectangle-parent2">
          <div className="frame-child5" onClick={onRectangleClick} />
          <div className="donate">Donate</div>
        </div>
        <div className="rectangle-parent3">
          <div className="frame-child6" onClick={onRectangle2Click} />
          <div className="message-us">Message Us</div>
        </div>
      </div>
    </div>
  );
};

export default Description;
