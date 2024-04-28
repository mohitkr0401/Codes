import FrameComponent1 from "../components/FrameComponent1";
import SaladsPizzaPie from "../components/SaladsPizzaPie";
import FrameComponent from "../components/FrameComponent";
import ScanButton from "../components/ScanButton";
import "./MyDonations.css";

const MyDonations = () => {
  return (
    <div className="my-donations">
      <div className="line-parent">
        <div className="line-div" />
        <div className="frame-child1" />
      </div>
      <FrameComponent1 />
      <main className="my-donations-inner">
        <section className="salads-pizza-pie-parent">
          <SaladsPizzaPie />
          <div className="frame-wrapper1">
            <div className="frame-parent2">
              <div className="food-title-parent">
                <b className="food-title">Food Title</b>
                <div className="frame-parent3">
                  <div className="salads-2-pizza-1-pie-wrapper">
                    <div className="salads-2-pizza">
                      5 Salads, 2 Pizza , 1 Pie
                    </div>
                  </div>
                  <div className="frame-child2" />
                </div>
              </div>
              <div className="pick-up-date-parent">
                <b className="pick-up-date">Pick up Date</b>
                <div className="frame-parent4">
                  <div className="sept-2023-wrapper">
                    <div className="sept-2023">27 Sept, 2023</div>
                  </div>
                  <div className="frame-child3" />
                </div>
              </div>
            </div>
          </div>
          <div className="frame-wrapper2">
            <div className="time-parent">
              <b className="time">Time</b>
              <div className="frame-wrapper3">
                <div className="meal-selection-container-parent">
                  <div className="meal-selection-container">
                    <div className="pm">12PM</div>
                    <div className="pm1">3PM</div>
                  </div>
                  <div className="frame-wrapper4">
                    <div className="salads-pizza-pie-group">
                      <img
                        className="salads-pizza-pie"
                        alt=""
                        src="/vector-51.svg"
                      />
                      <img
                        className="salads-pizza-pie1"
                        alt=""
                        src="/vector-51.svg"
                      />
                    </div>
                  </div>
                </div>
              </div>
            </div>
          </div>
          <FrameComponent />
          <ScanButton />
        </section>
      </main>
    </div>
  );
};

export default MyDonations;
