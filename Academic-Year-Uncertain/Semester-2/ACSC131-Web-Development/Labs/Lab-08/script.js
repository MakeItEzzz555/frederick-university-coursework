
function Calculate(){

    var num1 = parseInt(document.getElementById("num1").value);
    var num2 = parseInt(document.getElementById("num2").value); 
    var Sign = document.getElementById("sign").value;
    var sum;

    switch(Sign){
        case '+':
            
            sum = num1 + num2;
            break;

        case  '-':

            sum = num1 - num2;
            break;

        case '*':

            sum  = num1 * num2;
            break;

        case  '/':

            if (num2 !=0) { 
                sum = num1 / num2;  
            }

            else{
                alert('Error! Division by zero is not allowed');
                return false;
            }

            break;
        default:
            alert('Error! Invalid Operator');
    
    }

    alert("The sum is: "+ sum);

}
