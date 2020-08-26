
function findDivisors(n){

    let divisors = []

    for(let i=0; i<=n;i++){

        if(n%i == 0)
            divisors.push(i)

    }

    return divisors

}

function findPrimeNumbers(size){

    let primeNumbers = []
    let i = 1

    do {

        let divisors = findDivisors(i)

        if(divisors.length <= 2)
            primeNumbers.push( i )
        
        i++

    } while ( size > primeNumbers.length );
        
    // console.log(primeNumbers)
    console.log(`The ${size} prime number is ${primeNumbers[size-1]} `)

}

findPrimeNumbers(10)
findPrimeNumbers(100)
findPrimeNumbers(1000)