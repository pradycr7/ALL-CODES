fetch("https://api.taapi.io/rsi?secret=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJlbWFpbCI6InByYWR5dW1uYTJtb2hhbnR5QGdtYWlsLmNvbSIsImlhdCI6MTY0NDk0MjQxNywiZXhwIjo3OTUyMTQyNDE3fQ.Y0sh1Fzy9MXzLbQqb5jTq2alJkebIbfw7ML-FCDIjFs&exchange=binance&symbol=BTC/USDT&interval=30m", {

})
.then(data =>{
    return data.json();
})
.then(rsidata =>{
   rsidata = rsidata.value;
    var data = [
        {
            domain: { x: [0, 1], y: [0, 1] },
            value: rsidata,
            title: { text: "Speed" },
            type: "indicator",
            mode: "gauge+number"
        }
    ];
    
    var layout = { width: 400, height: 400, margin: { t: 0, b: 0,l: 0,r: 0 }, paper_bgcolor: '#EEF2FF' };
    Plotly.newPlot('RSI', data, layout);
})
.catch(err =>{
    console.log(err);
});