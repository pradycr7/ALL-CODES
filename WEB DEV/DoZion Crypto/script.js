/* ------------- Crypto API data ------------ */

fetch("https://coingecko.p.rapidapi.com/coins/markets?vs_currency=usd&page=1&per_page=100&order=market_cap_desc", {
	"method": "GET",
	"headers": {
		"x-rapidapi-host": "coingecko.p.rapidapi.com",
		"x-rapidapi-key": "415c95a350msh728826d4ed51452p162b61jsn951c3c19198b"
	}
})
.then(data => {
return data.json();
})
.then((completedata)=>{
   /* console.log(completedata[0].name);  */
 /*  document.getElementById("coin-card").innerHTML = completedata */

 let html = "";
 completedata.map((values)=>{
  html+=` <div class="grid">
  <div class="coin-label" style= text-transform:uppercase; >
  <div class="name">
  <h2>${values.name} (${values.symbol})</h2>
  </div>
  <img class="pic" src= ${values.image} style="width: 30px; height: 30px" class="coin-images">
  </div>
   <p class = "coin-label">Current Price: $ ${(values.current_price).toLocaleString()}</p>
   <p class = "coin-label">Market Cap: $ ${(values.market_cap).toLocaleString()}</p>
   <p class = "coin-label">Daily Change:  ${values.price_change_percentage_24h} %</p>
</div>`
 });
 document.getElementById("coin-card").innerHTML = html;
})
.catch(err => {
	console.error(err);
});

/* ------------- Search Items --------------- */



const searchCrypto = () => {

  let filterText = document.getElementById("filter").value.toUpperCase();

  let gridfilter = document.getElementsByClassName("grid");
  
  for(var i = 0; i<gridfilter.length; i++) {
    let textValue = gridfilter[i].innerText;

    if(textValue.indexOf(filterText) > -1) {
      gridfilter[i].style.display = '';  
    } else {
      gridfilter[i].style.display = 'none';
    }

  }

}




