import FrameComponent2 from "../components/FrameComponent2";
import "./ProfilePage.css";

const ProfilePage = () => {
  return (
    <div className="profile-page">
      <section className="rectangle-parent">
        <div className="frame-child" />
        <div className="page-1-parent">
          <img className="page-1-icon" loading="lazy" alt="" src="/page1.svg" />
          <div className="frame-wrapper">
            <div className="circle-symbol-parent">
              <img
                className="circle-symbol-icon"
                loading="lazy"
                alt=""
                src="/ellipse-1@2x.png"
              />
              <div className="frame-container">
                <div className="frame-parent">
                  <div className="jhone-doe-wrapper">
                    <h3 className="jhone-doe">Jhone Doe</h3>
                  </div>
                  <b className="new-delhi-ind">New Delhi, IND</b>
                </div>
              </div>
            </div>
          </div>
        </div>
        <div className="welcome-back-jhon-parent">
          <b className="welcome-back-jhon">Welcome Back, Jhon</b>
          <b className="you-have-provided">
            You have provided worth of 5 meals last month
          </b>
        </div>
      </section>
      <section className="profile-page-inner">
        <FrameComponent2 />
      </section>
    </div>
  );
};

export default ProfilePage;
