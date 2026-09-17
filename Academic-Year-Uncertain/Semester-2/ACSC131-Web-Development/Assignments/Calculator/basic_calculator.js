// Function that displays clicked value
function display(val) {
    document.getElementById("result").innerHTML += val;
}

// Function that evaluates the mathematical expression and gives the result
function solve() {
    let x = document.getElementById("result").innerHTML;
    let y = eval(x);
    document.getElementById("result").innerHTML = y;
}

// Function that clears the calculator display
function clr() {
    document.getElementById("result").innerHTML = "";
}

function addition(){
    var num1 = document.getElementsByName('number1').value;
    var num2 = document.getElementsByName('number2').value;
    var sum = num1 + num2;
    var par = '<p>' + sum  +'</p>';
    document.getElementsByName('basic_calculator').append(par);
    
}