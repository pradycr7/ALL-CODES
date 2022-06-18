const express = require("express");

const app = express();

app.get('/',function(req,res) {
    res.send("<h1>Hello World!</h1>");
});

app.get('/contact',function(req,res) {
    res.send("Contact me at prady@gmail.com");
});

app.get('/about',function(req,res) {
    res.send("<h1>Name</h1><p>Prady</p><h2>Address</h2><p>Balasore</p>");
});

app.listen(3000, function () {
    console.log("Server started on port 3000");
});

