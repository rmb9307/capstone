document.getElementById('modalBtn1').onclick = displayPopup;
document.getElementById('modalBtn2').onclick = displayPopup;
document.getElementById('modalBtn3').onclick = displayPopup;

function displayPopup () {

console.log("ITS LOGGIN", this.id)
  var popup = this.nextSibling.nextSibling;

  popup.style.display = 'block';
}


document.getElementById('close1').onclick = close;
document.getElementById('close2').onclick = close;
document.getElementById('close3').onclick = close;

function close () {
    console.log("hey its clickin")
    var popup = this.parentNode;
    popup.style.display = 'none';
}



