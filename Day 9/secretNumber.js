function aleatorio(min, max)
{
    var res;
    res = Math.floor(Math.random() * (max - min +1)) + min;
    return res;
}

let secretN = aleatorio(0, 10)

let tries = 0
let n

do{

     n = prompt('Try to guess the secret Number!')
    
    if( n == secretN )
    {
        alert('Congratulations! You win!')
    } 
    else if( n > secretN)
    {
        alert('The secret number is smaller than your number. Try again!' )
        tries++
    }
    else
    {
        alert('The secret number is higher than your number. Try again!' )
        tries++
    }

} while( n != secretN )