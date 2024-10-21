import React from 'react'

function ImageDisplay({url}) {

  return (
    <div className='col-md-4 border'> 
      <img src={url} alt="data" className='w-100 p2'/>
    </div>
  )
}

export default ImageDisplay;

