const { log } = require('console')
const http = require('http')

const hostname = '127.0.0.1'
const port = 4000

const server = http.createServer((req, res) => {
    //response
    res.end('Hello World\n')
    })

server.listen(port, hostname,()=>{
    console.log(`Server running at ${port} port number`);
    
})