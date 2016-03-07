var result = document.getElementById('res');
var btn0 = document.getElementById('btn0');
var btn1 = document.getElementById('btn1');
var btnSum = document.getElementById('btnSum');
var btnSub = document.getElementById('btnSub');
var btnMul = document.getElementById('btnMul');
var btnDiv = document.getElementById('btnDiv');
var clr = document.getElementById('btnClr');
var btnEql = document.getElementById('btnEql');
var currNumber = '';
var numbers = [];
var operators = [];

var pressBeforeEqual = function(e) {
  //console.log(e);
  content = e.srcElement.innerHTML;
  if(content === '+' || content === '-' || content === '*' || content === '/') {
    if(currNumber !== '') {
      result.innerHTML += content;
      numbers.push(parseInt(currNumber, 2));
      currNumber = '';
      operators.push(content);
    }
  }
  else {
    result.innerHTML += content;
    currNumber += content;
  }
}

var equal = function(e) {
  if(currNumber !== '' && operators.length > 0 && numbers.length > 0) {
    var res = 0;
    var num1 = numbers.pop();
    var num2 = parseInt(currNumber, 2);
    var operator = operators.pop();
    switch(operator) {
      case '+':
        res = num1 + num2;
        break;
      case '-':
        res = num1 - num2;
        break;
      case '*':
        res = num1 * num2;
        break;
      case '/':
        res = Math.floor(num1 / num2);
        break;
      default:
        break;
    }
    result.innerHTML = res.toString(2);
    currNumber = result.innerHTML;
  }
}

btn0.addEventListener('click',pressBeforeEqual);
btn1.addEventListener('click',pressBeforeEqual);
btnSum.addEventListener('click',pressBeforeEqual);
btnSub.addEventListener('click',pressBeforeEqual);
btnMul.addEventListener('click',pressBeforeEqual);
btnDiv.addEventListener('click',pressBeforeEqual);
clr.addEventListener('click',function(e) {
  result.innerHTML = '';
});
btnEql.addEventListener('click',equal);

