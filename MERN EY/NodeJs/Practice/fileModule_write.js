const fs = require('fs')

fs.writeFile("mytext.txt", "Dukh Dard Peedha",(err)=>{console.log(err);
})

fs.writeFileSync('mytext1.txt', "Hello by sync");