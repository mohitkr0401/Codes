import { useCallback } from "react";
import { useNavigate } from "react-router-dom";
import Component7 from "../components/Component7";
import "./Schedule.css";

const Schedule = () => {
  const navigate = useNavigate();

  const onComponent82ContainerClick = useCallback(() => {
    navigate("/cancel-donation");
  }, [navigate]);

  const onComponent83ContainerClick = useCallback(() => {
    navigate("/cancel-donation");
  }, [navigate]);

  const onComponent84ContainerClick = useCallback(() => {
    navigate("/cancel-donation");
  }, [navigate]);

  const onComponent85ContainerClick = useCallback(() => {
    navigate("/cancel-donation");
  }, [navigate]);

  const onComponent86ContainerClick = useCallback(() => {
    navigate("/cancel-donation");
  }, [navigate]);

  const onComponent87ContainerClick = useCallback(() => {
    navigate("/cancel-donation");
  }, [navigate]);

  const onComponent88ContainerClick = useCallback(() => {
    navigate("/cancel-donation");
  }, [navigate]);

  const onComponent89ContainerClick = useCallback(() => {
    navigate("/cancel-donation");
  }, [navigate]);

  const onComponent90ContainerClick = useCallback(() => {
    navigate("/cancel-donation");
  }, [navigate]);

  const onVectorIconClick = useCallback(() => {
    navigate("/");
  }, [navigate]);

  return (
    <div className="schedule">
      <section className="rectangle-parent11">
        <div className="frame-child29" />
        <img
          className="vector-icon7"
          loading="lazy"
          alt=""
          src="/vector4.svg"
          onClick={onVectorIconClick}
        />
        <div className="schedule-wrapper">
          <h3 className="schedule1">Schedule</h3>
        </div>
      </section>
      <section className="schedule-inner">
        <div className="component-82-parent">
          <Component7
            onComponent82ContainerClick={onComponent82ContainerClick}
          />
          <Component7
            frameDivPadding="var(--padding-sm) var(--padding-3xs) var(--padding-3xs) var(--padding-2xs)"
            propHeight="unset"
            propPadding="unset"
            propDebugCommit="unset"
            propDebugCommit1="unset"
            propHeight1="unset"
            propPadding1="unset"
            propDebugCommit2="unset"
            propDebugCommit3="unset"
            onComponent82ContainerClick={onComponent83ContainerClick}
          />
          <Component7
            frameDivPadding="var(--padding-sm) var(--padding-3xs) var(--padding-3xs) var(--padding-2xs)"
            propHeight="unset"
            propPadding="unset"
            propDebugCommit="unset"
            propDebugCommit1="unset"
            propHeight1="unset"
            propPadding1="unset"
            propDebugCommit2="unset"
            propDebugCommit3="unset"
            onComponent82ContainerClick={onComponent84ContainerClick}
          />
          <Component7
            frameDivPadding="var(--padding-sm) var(--padding-3xs) var(--padding-3xs) var(--padding-2xs)"
            propHeight="unset"
            propPadding="unset"
            propDebugCommit="unset"
            propDebugCommit1="unset"
            propHeight1="unset"
            propPadding1="unset"
            propDebugCommit2="unset"
            propDebugCommit3="unset"
            onComponent82ContainerClick={onComponent85ContainerClick}
          />
          <Component7
            frameDivPadding="var(--padding-sm) var(--padding-3xs) var(--padding-3xs) var(--padding-2xs)"
            propHeight="unset"
            propPadding="unset"
            propDebugCommit="unset"
            propDebugCommit1="unset"
            propHeight1="unset"
            propPadding1="unset"
            propDebugCommit2="unset"
            propDebugCommit3="unset"
            onComponent82ContainerClick={onComponent86ContainerClick}
          />
          <Component7
            frameDivPadding="var(--padding-sm) var(--padding-3xs) var(--padding-3xs) var(--padding-2xs)"
            propHeight="unset"
            propPadding="unset"
            propDebugCommit="unset"
            propDebugCommit1="unset"
            propHeight1="unset"
            propPadding1="unset"
            propDebugCommit2="unset"
            propDebugCommit3="unset"
            onComponent82ContainerClick={onComponent87ContainerClick}
          />
          <Component7
            frameDivPadding="var(--padding-sm) var(--padding-3xs) var(--padding-3xs) var(--padding-2xs)"
            propHeight="unset"
            propPadding="unset"
            propDebugCommit="unset"
            propDebugCommit1="unset"
            propHeight1="unset"
            propPadding1="unset"
            propDebugCommit2="unset"
            propDebugCommit3="unset"
            onComponent82ContainerClick={onComponent88ContainerClick}
          />
          <Component7
            frameDivPadding="var(--padding-sm) var(--padding-3xs) var(--padding-3xs) var(--padding-2xs)"
            propHeight="unset"
            propPadding="unset"
            propDebugCommit="unset"
            propDebugCommit1="unset"
            propHeight1="unset"
            propPadding1="unset"
            propDebugCommit2="unset"
            propDebugCommit3="unset"
            onComponent82ContainerClick={onComponent89ContainerClick}
          />
          <Component7
            frameDivPadding="var(--padding-sm) var(--padding-3xs) var(--padding-smi) var(--padding-2xs)"
            propHeight="33px"
            propPadding="0px 0px var(--padding-lg)"
            propDebugCommit="unset"
            propDebugCommit1="unset"
            propHeight1="27px"
            propPadding1="0px 0px var(--padding-base)"
            propDebugCommit2="unset"
            propDebugCommit3="unset"
            onComponent82ContainerClick={onComponent90ContainerClick}
          />
        </div>
      </section>
    </div>
  );
};

export default Schedule;
