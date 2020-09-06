function random(min, max){

    let res;
    res = Math.floor(Math.random() * (max - min +1)) + min;
    return res;

}


function requestNumber(){

    let userNumber =  prompt('Type a 4 digits number: ')

    while ( userNumber.length !== 4 || isNaN( parseInt( userNumber )) ){

        console.log('Type a valid input')
        userNumber = prompt('Type a 4 digits number: ')
        
    }

    return userNumber

}

// function requestNumber(){

//     let userNumber = prompt('Type a 4 digits number: ')
//     // console.log(userNumber, parseInt(userNumber), isNaN(parseInt(userNumber)))
    
//     if( userNumber.length !== 4 || isNaN( parseInt( userNumber )) ){
//         console.log('Type a valid input')
//         requestNumber()
//     }
//     else
//         return userNumber
    

// }


function cowsAndBulls(){

    let cows = 0
    let bulls = 0
    let thisLapCows

    while (cows < 10) {

        let number = random(0, 9999).toString()
        number = '0'.repeat( 4 - number.length ) + number
        let userNumber = requestNumber()

        console.log(number, userNumber)

        thisLapCows = 0

        for(let i=0; i<4; i++){
    
            if( number[i] === userNumber[i] ){
                thisLapCows++
                cows++
            }
            
        }

        console.log(`thisLapCows = ${thisLapCows}`)
    
        if(thisLapCows === 0)
            bulls++
    
        console.log(`cows = ${cows}, bulls = ${bulls}`)

    }

}

cowsAndBulls()

