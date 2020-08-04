
let limitNumber = prompt("Type the limit")

function findDivisors(n){

    let divisors = []

    for(let i=0; i<=n;i++){

        if(n%i == 0)
            divisors.push(i)

    }

    return divisors

}

function findPrimeNumbers(limit){

    let primeNumbers = []

    for(let i=0; i<=limit; i++){

        let divisors = findDivisors(i)

        if(divisors.length <= 2)
            primeNumbers.push( i )

    }

    console.log(primeNumbers)

}

findPrimeNumbers(limitNumber)