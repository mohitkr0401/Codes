// const { log } = require('console')
// const http = require('http')

// const hostname = '127.0.0.1'
// const port = 4000

// const server = http.createServer((req, res) => {
//     //response
//     res.end('Hello World\n')
//     })

// server.listen(port, hostname,()=>{
//     console.log(`Server running at ${port} port number`);

// })

const cors = require('cors')
const { MongoClient } = require('mongodb')
const mongoose = require('mongoose')
const model = require('./model')
const ip = require('ip')
const fs = require('fs')
const express = require('express')

const port = 4000
const hostname = '127.0.0.1'

const app = express()

app.use(express.json())

const mymiddleware = (req, res, next) => {
    const d = new Date()
    fs.appendFile('mylog.txt', `Request coming for ${req.url} from this ${ip.address()} on ${d}\n`, (err) => {
        console.log(err);
    })
    console.log("Welcome to my Server!!");
    console.log(ip.address());

    // console.log(req.ip); // only last value of ip address will be shown.

    next()
}
app.use(mymiddleware)

const dbconnect = async () => {
    try {
        await mongoose.connect('mongodb://127.0.0.1:27017/MERN_EY');
        console.log("Database Connected!!")
    }
    catch (err) { console.log(err) }
}
dbconnect()


app.get('/', (req, res) => {

    const name = req.query.name;
    const loc = req.query.location;
    res.send(`Hello this is Landing Page!! \n Name: ${name}\nLoaction: ${loc}`)
})

// app.get('/:name', (req,res)=>{
//     const name = req.params.name
//     res.send(`Hello this is Landing Page!! \n Name: ${name}`)

// })

app.get('/home', (req, res) => {
    res.send("Hello I am Your Home Page using -GET Method")
}
)

app.get('/search', async (req, res) => {


    /*
     * Requires the MongoDB Node.js Driver
     * https://mongodb.github.io/node-mongodb-native
     */

    // const filter = {
    //     '$or': [{ 'age': { '$gt': 20 } }]
    // };

    const client = await MongoClient.connect(
        'mongodb://localhost:27017/'
    );
    const coll = client.db('MERN_EY').collection('user');
    // const cursor = coll.find(filter);
    const cursor = coll.find({ age: { $gt: Number(req.query.age) }, branch: { $eq: "IT" } });

    const result = await cursor.toArray();
    await client.close();
    console.log(result)
    // res.send("Searching the Data....(GET)")
    res.json(result)
}
)

app.post('/addUser', async (req, res) => {
    try {
        console.log(req.body);
        const newUser = new model(req.body)
        await newUser.save()
        res.send("User Added Successfully")
    }
    catch (err) {
        if (err.code == 11000 && err.keyValue.name) {
            console.log("Error!!\nName should be Unique!!")
            res.send("Name Should be Unique!!")
        }
        else{console.log(err)}
    }
}
)
app
app.delete('/deleteUser', (req, res) => {
    res.send("Deleting User Data....(DELETE)")
}
)
app.put('/update', (req, res) => {
    res.send("Updating Page Data....(PUT)")

}
)
app.post('/home', (req, res) => {
    res.send("I am in POST - home")
})

app.all('*', (req, res) => {
    res.status(404).send("404 Not Found")
})

app.listen(port, () => {
    console.log(`Server is Running at port ${port} `);

})