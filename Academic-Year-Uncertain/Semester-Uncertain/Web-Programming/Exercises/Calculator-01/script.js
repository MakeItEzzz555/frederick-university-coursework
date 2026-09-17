function multiplyBy()
{
  const num1 = parseFloat(document.getElementById('firstNumber').value);
  const num2 = parseFloat(document.getElementById('secondNumber').value);
  document.getElementById("result").innerHTML = num1 * num2;
  
}
function divideBy()
{
    const num1 = parseFloat(document.getElementById('firstNumber').value);
    const num2 = parseFloat(document.getElementById('secondNumber').value);
    document.getElementById("result").innerHTML = num1 / num2;
}
function modBy(){
     const num1 = parseFloat(document.getElementById('firstNumber').value);
     const num2 = parseFloat(document.getElementById('secondNumber').value);
     document.getElementById("result").innerHTML = num1 % num2;
}