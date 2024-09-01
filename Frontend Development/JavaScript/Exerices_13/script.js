function createCard(title, cName, views, monthsOld, duration, thumbnail){
    let viewStr;
    if(views < 1000){
        viewStr = views;
    }
    else if(views > 1000000){
        viewStr = views/1000000 + "M";
    }
    else{
        viewStr = views/1000 + "K";
    }
    let html = `<div class="card">
                    <div class="imag_container">
                        <img src="${thumbnail}" alt="codewithharry">
                        <div class="capsule">${duration}</div>
                    </div>
                    <div class="info">
                        <h1 class="heading">${title}</h1>
                        <p class="para">${cName} . ${viewStr} views . ${monthsOld} months ago</p>
                    </div>
                </div>`
    document.querySelector(".container").innerHTML = document.querySelector(".container").innerHTML + html;
}
  
createCard("Introduction to Backend | Sigma Web Dev video #1", "Codewithharry", "74364", "2", "31.22", "https://i.ytimg.com/vi/tVzUXW6siu0/hqdefault.jpg?sqp=-oaymwEcCPYBEIoBSFXyq4qpAw4IARUAAIhCGAFwAcABBg==&rs=AOn4CLACwWOixJVrKLFindK92kYMgTcQbw") 