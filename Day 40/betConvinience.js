function successBinarySearch(numbers){

    let n = numbers
    let tries = 0

    while (n !== 1) {

        if( n%2 === 0 )
            n /= 2
        else
            n = Math.floor(n/2)
        tries++
    }

    return tries

}

let tries = successBinarySearch(100)

if( tries > 5 )
    console.log('You will probably lose')
else if( tries === 5 )
    console.log(`You won't win, but you won't lose`)
else
    console.log(`You will probably win!`)
