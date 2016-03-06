var btns = [document.getElementById('btn1'),document.getElementById('btn2'),
            document.getElementById('btn3'),document.getElementById('btn6'),
            document.getElementById('btn9'),document.getElementById('btn8'),
            document.getElementById('btn7'),document.getElementById('btn4')]
var btn5 = document.getElementById('btn5');

btn5.addEventListener('click', function(e) {
    var nextvalue;
    for(var i = 0;i < btns.length;i++) {
        if(i === 0) {
            nextvalue = btns[i].innerHTML;
            btns[i].innerHTML = btns[btns.length - 1].innerHTML;
        }
        else {
            var aux = btns[i].innerHTML;
            btns[i].innerHTML = nextvalue;
            nextvalue = aux;
        }
    }
});

