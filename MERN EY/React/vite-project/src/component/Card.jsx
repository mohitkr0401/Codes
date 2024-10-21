import React from 'react'

function Card({details}) {
  return (
    <>
    <div style={{border:'4px solid red', background:'pink'}}>
        <h1>
            Name: {details.Name} 
            Type: {details.cardType}
        </h1>
        
    </div>
    </>
  )
}

export default Card;
