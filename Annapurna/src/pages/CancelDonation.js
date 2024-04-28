import { useCallback } from "react";
import { useNavigate } from "react-router-dom";
import FrameComponent from "../components/FrameComponent";
import Component3 from "../components/Component3";
import Component2 from "../components/Component2";
import Component1 from "../components/Component1";
import Component from "../components/Component";
import Component6 from "../components/Component6";
import "./CancelDonation.css";

const CancelDonation = () => {
  const navigate = useNavigate();

  const onComponent72ContainerClick = useCallback(() => {
    navigate("/description");
  }, [navigate]);

  return (
    <div className="cancel-donation">
      <header className="rectangle-parent9">
        <div className="frame-child24" />
        <div className="frame-wrapper5">
          <div className="vector-parent">
            <img
              className="vector-icon5"
              loading="lazy"
              alt=""
              src="/vector4.svg"
            />
            <img
              className="vector-icon6"
              loading="lazy"
              alt=""
              src="/vector-11.svg"
            />
          </div>
        </div>
        <div className="frame-parent10">
          <div className="cancel-donation-wrapper">
            <b className="cancel-donation1">Cancel Donation ?</b>
          </div>
          <b className="new-delhi">New Delhi , Delhi - 110001</b>
        </div>
      </header>
      <section className="prepared-food-label-parent">
        <div className="prepared-food-label">
          <b className="veg-rice-curry1">Veg Rice Curry</b>
        </div>
        <div className="veg-rice-curry-box">
          <div className="rectangle-parent10">
            <img
              className="frame-child25"
              loading="lazy"
              alt=""
              src="/rectangle-78@2x.png"
            />
            <img
              className="frame-child26"
              loading="lazy"
              alt=""
              src="/rectangle-78@2x.png"
            />
            <img
              className="frame-child27"
              loading="lazy"
              alt=""
              src="/rectangle-78@2x.png"
            />
            <img
              className="frame-child28"
              loading="lazy"
              alt=""
              src="/rectangle-78@2x.png"
            />
          </div>
        </div>
        <div className="category-date-component">
          <b className="category1">Category</b>
          <FrameComponent propPadding="unset" />
          <b className="date-of-donation1">Date of Donation</b>
        </div>
        <div className="food-image">
          <div className="frame-parent11">
            <div className="component-69-parent">
              <Component3 september="September" />
              <div className="component-instance">
                <b className="donated-to1">Donated To</b>
              </div>
            </div>
            <div className="september-year-label">
              <div className="component-70-wrapper">
                <Component2 propWidth="unset" propFlex="1" />
              </div>
              <Component3 september="10 : 30 PM" />
            </div>
          </div>
          <Component1 />
        </div>
        <div className="component-72-wrapper">
          <Component
            propAlignSelf="unset"
            propFlex="1"
            propDebugCommit="unset"
            propDebugCommit1="unset"
            onComponent67ContainerClick={onComponent72ContainerClick}
          />
        </div>
        <div className="component-instance1">
          <Component6 />
        </div>
      </section>
    </div>
  );
};

export default CancelDonation;
