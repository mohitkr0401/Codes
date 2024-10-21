import React from 'react'

function handle(params) {
    alert("Clicked!!")
}
function EventExample() {
  return (
    <>
    <button onClick={handle}>Click 1</button>
    <button onMouseOver={()=>{
        alert("Mouse Over!!")
    }}>Click 2</button>

    </>
    
  )
}
export default EventExample