/* ------------- News API ------------ */

fetch("https://investing-cryptocurrency-markets.p.rapidapi.com/coins/get-news?pair_ID=1057391&page=1&time_utc_offset=28800&lang_ID=1", {
	"method": "GET",
	"headers": {
		"x-rapidapi-host": "investing-cryptocurrency-markets.p.rapidapi.com",
		"x-rapidapi-key": "415c95a350msh728826d4ed51452p162b61jsn951c3c19198b"
	}
})
.then(newsdata => {
  return newsdata.json();
  })
  .then((completenewsdata)=>{
     /* console.log(completedata[0].name);  */
   /*  document.getElementById("coin-card").innerHTML = completedata */
  
   let newshtml = "";
   let halwa = completenewsdata.data[0].screen_data.news;
   halwa.map((newsvalues)=>{
     newshtml+=` <div class="news-grid">
     
      <h2 class="newstitle">${newsvalues.HEADLINE} </h2>
      
     <img src = ${newsvalues.related_image} style="height:200px; width:200px;">
  </div>`
   });
   document.getElementById("news-id").innerHTML = newshtml;
  })
  .catch(newserr => {
    console.error(newserr);
  });