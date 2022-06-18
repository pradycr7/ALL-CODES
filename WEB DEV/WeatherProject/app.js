const express = require("express");
const https = require("https");
const bodyParser = require("body-parser");

const app = express();

app.use(bodyParser.urlencoded({extended: true}));

app.get("/",function(req,res) {
    res.sendFile(__dirname + "/index.html");
})

app.post("/",function(req,res) {
    
const query = req.body.cityName;
    const appid = "57758ffc3ef6dd8ec22cc4fcd00a986d";
    const units = "metric";

    const url = "https://api.openweathermap.org/data/2.5/weather?q=" + query + "&units=" + units + "&appid=" + appid;

    https.get(url,function(response) {
        console.log(response.statusCode);

        response.on("data", function(data) {
            const WeatherData = JSON.parse(data)
            const temp = WeatherData.main.temp
            const desc = WeatherData.weather[0].description
            const icon = WeatherData.weather[0].icon
            const imageURL = "http://openweathermap.org/img/wn/" + icon + "@2x.png"
            res.write("<p>The weather is currently " + desc + "</p>");
            res.write("<h1>The temperature of " + query + " is " + temp + " degree celcius.</h1>");
            res.write("<img src =" + imageURL + ">");
          res.send()
        })
    }) 

})






app.listen(3000, function() {
    console.log("Server is running at port 3000");
})