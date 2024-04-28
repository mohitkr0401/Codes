import { useMemo } from "react";
import "./Component71.css";

const Component7 = ({
  frameDivPadding,
  propHeight,
  propPadding,
  propDebugCommit,
  propDebugCommit1,
  propHeight1,
  propPadding1,
  propDebugCommit2,
  propDebugCommit3,
  onComponent82ContainerClick,
}) => {
  const component82Style = useMemo(() => {
    return {
      padding: frameDivPadding,
    };
  }, [frameDivPadding]);

  const frameDiv18Style = useMemo(() => {
    return {
      height: propHeight,
      padding: propPadding,
    };
  }, [propHeight, propPadding]);

  const weShareStyle = useMemo(() => {
    return {
      debugCommit: propDebugCommit,
    };
  }, [propDebugCommit]);

  const vegRiceCurryStyle = useMemo(() => {
    return {
      debugCommit: propDebugCommit1,
    };
  }, [propDebugCommit1]);

  const frameDiv19Style = useMemo(() => {
    return {
      height: propHeight1,
      padding: propPadding1,
    };
  }, [propHeight1, propPadding1]);

  const frameDiv20Style = useMemo(() => {
    return {
      debugCommit: propDebugCommit2,
    };
  }, [propDebugCommit2]);

  const date10102023Style = useMemo(() => {
    return {
      debugCommit: propDebugCommit3,
    };
  }, [propDebugCommit3]);

  return (
    <div
      className="component-82"
      onClick={onComponent82ContainerClick}
      style={component82Style}
    >
      <div className="component-82-child" />
      <div className="ellipse-parent2">
        <img
          className="frame-child71"
          loading="lazy"
          alt=""
          src="/ellipse-12@2x.png"
        />
        <div className="frame-wrapper23">
          <div className="we-share-parent" style={frameDiv18Style}>
            <b className="we-share" style={weShareStyle}>
              We Share
            </b>
            <div className="veg-rice-curry4" style={vegRiceCurryStyle}>
              Veg Rice Curry
            </div>
          </div>
        </div>
      </div>
      <div className="frame-parent42" style={frameDiv19Style}>
        <div className="days-ago-set-parent" style={frameDiv20Style}>
          <img
            className="days-ago-set"
            loading="lazy"
            alt=""
            src="/vector-13.svg"
          />
          <div className="days-ago">2 days ago</div>
        </div>
        <div className="date-10102023" style={date10102023Style}>
          Date : 10/10/2023
        </div>
      </div>
    </div>
  );
};

export default Component7;
