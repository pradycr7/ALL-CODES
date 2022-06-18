fetch("https://api.alternative.me/fng/?limit=10",{

})
.then(data =>{
    return data.json();
})
.then(fgidata =>{
fgidata = fgidata.data[0].value;
var data = [
	{
		domain: { x: [0, 1], y: [0, 1] },
		value: fgidata,
		title: { text: "Speed" },
		type: "indicator",
		mode: "gauge+number"
	}
];

var layout = { width: 400, height: 400, margin: { t: 0, b: 0,l: 0,r: 0 }, paper_bgcolor: '#EEF2FF' };
Plotly.newPlot('FGI', data, layout);

})
.catch(err =>{
    console.log(err);
});