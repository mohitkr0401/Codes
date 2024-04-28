import { useCallback } from "react";
import { useNavigate } from "react-router-dom";
import Component2 from "../components/Component2";
import Component4 from "../components/Component4";
import Component3 from "../components/Component3";
import FrameComponent1 from "../components/FrameComponent1";
import FrameComponent from "../components/FrameComponent";
import Component46Variant from "../components/Component46Variant";
import "./HomeScreen.css";

const HomeScreen = () => {
  const navigate = useNavigate();

  const onRectangleClick = useCallback(() => {
    navigate("/description");
  }, [navigate]);

  return (
    <div className="home-screen">
      <section className="f-r-a-m-e-donate-again">
        <div className="donate-again-wrapper">
          <b className="donate-again">Donate Again</b>
        </div>
        <div className="f-r-a-m-ethe-food-you-can-shar">
          <Component2
            propPadding="0px 0px var(--padding-11xl)"
            propDebugCommit="unset"
            propHeight="254px"
            propBottom="unset"
            propHeight1="284px"
            propWidth="213px"
            propRight="unset"
            propBottom1="unset"
            propHeight2="284px"
            propWidth1="213px"
            propRight1="unset"
            propBottom2="unset"
            propHeight3="105px"
            propPadding1="0px 0px var(--padding-21xl)"
            propDebugCommit1="unset"
            propDebugCommit2="unset"
            onRectangle4Click={onRectangleClick}
          />
          <Component4 />
          <Component3 />
        </div>
      </section>
      <FrameComponent1 />
      <FrameComponent />
      <Component46Variant />
    </div>
  );
};

export default HomeScreen;
