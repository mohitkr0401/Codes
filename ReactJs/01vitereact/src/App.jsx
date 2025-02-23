// vite react app
// for creating a new react app with vite, we use the command:
// npm create vite@latest
// and then we select react as the template
// npm install
// npm run dev or run start to start the server
// npm run build to build the app

import Chai from "./chai"


function App() {
  const username = "chai aur code"

  return (
    <>
    <Chai/>
    <h1>chai aur react {username}</h1> // {username} is a variable and it is called evaluated expression
    <p>test para</p>
   </>
  )
}

export default App
