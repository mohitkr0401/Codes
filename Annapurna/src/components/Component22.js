import { useMemo } from "react";
import "./Component22.css";

const Component2 = ({
  propFlex,
  propAlignSelf,
  onComponent54ContainerClick,
}) => {
  const component54Style = useMemo(() => {
    return {
      flex: propFlex,
      alignSelf: propAlignSelf,
    };
  }, [propFlex, propAlignSelf]);

  return (
    <div
      className="component-54"
      onClick={onComponent54ContainerClick}
      style={component54Style}
    >
      <div className="component-54-child" />
      <b className="next">Next</b>
    </div>
  );
};

export default Component2;
