import { useEffect } from "react";
import {
  Routes,
  Route,
  useNavigationType,
  useLocation,
} from "react-router-dom";
import HomeScreen from "./pages/HomeScreen";
import ProfilePage from "./pages/ProfilePage";
import ScannerScreen from "./pages/ScannerScreen";
import Register from "./pages/Register";
import MyDonations from "./pages/MyDonations";
import Address from "./pages/Address";
import Description from "./pages/Description";
import Splash from "./pages/Splash";
import ChatScreen from "./pages/ChatScreen";
import Ngos from "./pages/Ngos";
import SearchPage from "./pages/SearchPage";
import Onboard from "./pages/Onboard";
import Onboard1 from "./pages/Onboard1";
import Onboarding from "./pages/Onboarding";
import NotificationScreen from "./pages/NotificationScreen";
import CancelDonation from "./pages/CancelDonation";
import Schedule from "./pages/Schedule";

function App() {
  const action = useNavigationType();
  const location = useLocation();
  const pathname = location.pathname;

  useEffect(() => {
    if (action !== "POP") {
      window.scrollTo(0, 0);
    }
  }, [action, pathname]);

  useEffect(() => {
    let title = "";
    let metaDescription = "";

    switch (pathname) {
      case "/":
        title = "";
        metaDescription = "";
        break;
      case "/profile-page":
        title = "";
        metaDescription = "";
        break;
      case "/scanner-screen":
        title = "";
        metaDescription = "";
        break;
      case "/register":
        title = "";
        metaDescription = "";
        break;
      case "/my-donations":
        title = "";
        metaDescription = "";
        break;
      case "/address":
        title = "";
        metaDescription = "";
        break;
      case "/description":
        title = "";
        metaDescription = "";
        break;
      case "/splash":
        title = "";
        metaDescription = "";
        break;
      case "/chat-screen":
        title = "";
        metaDescription = "";
        break;
      case "/ngos":
        title = "";
        metaDescription = "";
        break;
      case "/search-page":
        title = "";
        metaDescription = "";
        break;
      case "/onboard-2":
        title = "";
        metaDescription = "";
        break;
      case "/onboard-1":
        title = "";
        metaDescription = "";
        break;
      case "/onboarding3":
        title = "";
        metaDescription = "";
        break;
      case "/notification-screen":
        title = "";
        metaDescription = "";
        break;
      case "/cancel-donation":
        title = "";
        metaDescription = "";
        break;
      case "/schedule":
        title = "";
        metaDescription = "";
        break;
    }

    if (title) {
      document.title = title;
    }

    if (metaDescription) {
      const metaDescriptionTag = document.querySelector(
        'head > meta[name="description"]'
      );
      if (metaDescriptionTag) {
        metaDescriptionTag.content = metaDescription;
      }
    }
  }, [pathname]);

  return (
    <Routes>
      <Route path="/" element={<HomeScreen />} />
      <Route path="/profile-page" element={<ProfilePage />} />
      <Route path="/scanner-screen" element={<ScannerScreen />} />
      <Route path="/register" element={<Register />} />
      <Route path="/my-donations" element={<MyDonations />} />
      <Route path="/address" element={<Address />} />
      <Route path="/description" element={<Description />} />
      <Route path="/splash" element={<Splash />} />
      <Route path="/chat-screen" element={<ChatScreen />} />
      <Route path="/ngos" element={<Ngos />} />
      <Route path="/search-page" element={<SearchPage />} />
      <Route path="/onboard-2" element={<Onboard />} />
      <Route path="/onboard-1" element={<Onboard1 />} />
      <Route path="/onboarding3" element={<Onboarding />} />
      <Route path="/notification-screen" element={<NotificationScreen />} />
      <Route path="/cancel-donation" element={<CancelDonation />} />
      <Route path="/schedule" element={<Schedule />} />
    </Routes>
  );
}
export default App;
