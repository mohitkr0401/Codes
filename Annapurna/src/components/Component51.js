import { useMemo } from "react";
import "./Component51.css";

const Component5 = ({ propAlignSelf, propFlex, propMarginLeft }) => {
  const component11Style = useMemo(() => {
    return {
      alignSelf: propAlignSelf,
      flex: propFlex,
      marginLeft: propMarginLeft,
    };
  }, [propAlignSelf, propFlex, propMarginLeft]);

  return (
    <div className="component-11" style={component11Style}>
      <div className="component-11-child" />
      <div className="hii-your-donation">
        Hii, Your donation is picked up from your location
      </div>
    </div>
  );
};

export default Component5;
