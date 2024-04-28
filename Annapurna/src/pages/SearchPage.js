import { useCallback } from "react";
import { useNavigate } from "react-router-dom";
import FrameComponent3 from "../components/FrameComponent3";
import Component1 from "../components/Component1";
import "./SearchPage.css";

const SearchPage = () => {
  const navigate = useNavigate();

  const onRectangleClick = useCallback(() => {
    navigate("/description");
  }, [navigate]);

  const onRectangle2Click = useCallback(() => {
    navigate("/description");
  }, [navigate]);

  const onRectangle3Click = useCallback(() => {
    navigate("/description");
  }, [navigate]);

  const onRectangle4Click = useCallback(() => {
    navigate("/description");
  }, [navigate]);

  const onRectangle5Click = useCallback(() => {
    navigate("/description");
  }, [navigate]);

  const onRectangle6Click = useCallback(() => {
    navigate("/description");
  }, [navigate]);

  return (
    <div className="search-page">
      <FrameComponent3 />
      <section className="search-page-inner">
        <div className="your-search-result-is-parent">
          <b className="your-search-result">Your Search Result is :</b>
          <div className="component-47-parent">
            <Component1 onRectangleClick={onRectangleClick} />
            <Component1
              propLeft="202px"
              propTop="0px"
              propAlignSelf="unset"
              propFlex="unset"
              propAlignSelf1="unset"
              propWidth="unset"
              propFlex1="unset"
              propAlignSelf2="unset"
              propDisplay="inline-block"
              propMinWidth="67px"
              propFlex2="unset"
              onRectangleClick={onRectangle2Click}
            />
            <Component1
              propLeft="0px"
              propTop="251px"
              propAlignSelf="unset"
              propFlex="unset"
              propAlignSelf1="unset"
              propWidth="unset"
              propFlex1="unset"
              propAlignSelf2="unset"
              propDisplay="inline-block"
              propMinWidth="67px"
              propFlex2="unset"
              onRectangleClick={onRectangle3Click}
            />
            <Component1
              propLeft="202px"
              propTop="251px"
              propAlignSelf="unset"
              propFlex="unset"
              propAlignSelf1="unset"
              propWidth="unset"
              propFlex1="unset"
              propAlignSelf2="unset"
              propDisplay="inline-block"
              propMinWidth="67px"
              propFlex2="unset"
              onRectangleClick={onRectangle4Click}
            />
            <Component1
              propLeft="0px"
              propTop="502px"
              propAlignSelf="stretch"
              propFlex="1"
              propAlignSelf1="stretch"
              propWidth="105px"
              propFlex1="1"
              propAlignSelf2="stretch"
              propDisplay="unset"
              propMinWidth="unset"
              propFlex2="1"
              onRectangleClick={onRectangle5Click}
            />
            <Component1
              propLeft="202px"
              propTop="502px"
              propAlignSelf="stretch"
              propFlex="1"
              propAlignSelf1="stretch"
              propWidth="105px"
              propFlex1="1"
              propAlignSelf2="stretch"
              propDisplay="unset"
              propMinWidth="unset"
              propFlex2="1"
              onRectangleClick={onRectangle6Click}
            />
          </div>
        </div>
      </section>
    </div>
  );
};

export default SearchPage;
