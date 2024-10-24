// use express.com to get the code fastly

const express = require('express')
const app = express()
const cors = require('cors')
const { MongoClient } = require('mongodb')
let client;
const mongoclient = new MongoClient('mongodb://localhost:27017/')
const port = 3000


app.use(express.json()) //using JSON middleware
app.use(cors())

const dbconnect = async () => {
    try {
        client = await mongoclient.connect()
        console.log("DB Connected!!")
    } catch (err) { console.log(err) }
}
dbconnect()
app.get('/', (req, res) => {
    res.send('Hello World!')
})


app.post('/signin', async (req, res) => {
    const { username, password } = req.body
    const coll = client.db('myApp').collection('signup')
    const cursor = await coll.find({ username: req.body.username })
    const result = await cursor.toArray()
    if (result.length > 0) {
        if (username == result[0].username && password == result[0].password) {
            res.send({ ok: 1, msg: "Valid Username and Password!" })
        }
        else if (password != result[0].password) {
            res.send({ ok: 0, msg: "Not Valid Password" })
        }
        else{
            res.send({ ok: 0, msg: "Not Found Any User wit Such Name!" })
        }
    }
    else { res.send({ ok: 0, msg: "Not Valid Username" }) }
    // console.log(result[0].username)
    // res.send(req.body)
})


app.post('/signup', (req, res) => {
    try {
        const coll = client.db('myApp').collection('signup');
        const cursor = coll.insertOne(req.body);
        // res.send(req.body)
        res.send({ ok: 1, msg: "User Created!" })
    } catch (err) {
        console.log(err)
        res.send({ ok: 0, msg: "Error Occured!\nUser Not Created!, Try again after sometime." })

    }
})



app.listen(port, () => {
    console.log(`Listening on Port ${port} number!`)
})