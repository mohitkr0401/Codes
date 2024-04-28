import FrameComponent7 from "../components/FrameComponent7";
import FrameComponent6 from "../components/FrameComponent6";
import FrameComponent5 from "../components/FrameComponent5";
import FrameComponent4 from "../components/FrameComponent4";
import Container from "../components/Container";
import "./ChatScreen.css";

const ChatScreen = () => {
  return (
    <div className="chat-screen">
      <FrameComponent7 />
      <FrameComponent6 />
      <div className="chat-screen-child" />
      <div className="i-want-to">
        I want to have a chat with my delivery partner
      </div>
      <FrameComponent5 />
      <div className="chat-screen-item" />
      <div className="i-want-to1">
        I want to have a chat with my delivery partner
      </div>
      <FrameComponent4
        component23="pending_33:1111"
        component24="pending_33:1112"
        component26="pending_33:1116"
      />
      <div className="chat-screen-inner" />
      <div className="i-want-to2">
        I want to have a chat with my delivery partner
      </div>
      <FrameComponent4
        component23="pending_33:1140"
        component24="pending_33:1141"
        component26="pending_33:1144"
        propPadding="0px var(--padding-2xs) var(--padding-lgi) var(--padding-3xs)"
      />
      <Container />
    </div>
  );
};

export default ChatScreen;
