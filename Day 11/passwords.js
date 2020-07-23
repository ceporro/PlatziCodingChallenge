var password = {
    lower: false,
    upper: false,
    numbers: false,
    symbols: false
}

const lowerLetters = "abcdefghijklmnñopqrstuvwxyz"
const upperLetters = "ABCDEFGHIJKLMNÑOPQRSTUVWXYZ"
const symbols = ` !"·$%&/()=?¿ª\|@#~€¬{},-_.:;<>`

function random(min, max)
{
    var res;
    res = Math.floor(Math.random() * (max - min +1)) + min;
    return res;
}

const length = prompt('Type the length of your password:')

var lower = prompt('Do you want to include lowercase? ')
const upper = prompt('Do you want to include capital letters? ')
const number = prompt('Do you want to include numbers? ')
const symbol = prompt('Do you want to include symbols? ')

const array = []

function includeIt( typeChar ){

    var name = Object.keys(typeChar)[0]

    if(  typeChar[name]=== "yes" ||  typeChar[name]==="YES" ||  typeChar[name]==="Yes" )
        array.push(name.toString())

}

includeIt({lower})
includeIt({upper})
includeIt({number})
includeIt({symbol})


function randomChar(charType){

    switch(charType){
        case "lower":
            return lowerLetters.charAt(random(0,lowerLetters.length))
            
        case "upper":
             return upperLetters.charAt(random(0,upperLetters.length))
             
        case "number":
            return random(0,9).toString()
        case "symbol":
            return symbols.charAt(random(0,symbols.length))
    }
}

function generatePassword(arrayCharTypes){
    
    let pass = ""

    for(let i=0; i<length;i++){

        let n = random( 0, arrayCharTypes.length - 1)

        switch( arrayCharTypes.length ){
            case 1:
                pass+=randomChar(arrayCharTypes[0])
            case 2:
                if( n==0 )
                    pass+=randomChar(arrayCharTypes[0])
                else
                    pass+=randomChar(arrayCharTypes[1])
            case 3:
                if( n===0 )
                    pass+=randomChar(arrayCharTypes[0])
                else if( n===1 )
                    pass+=randomChar(arrayCharTypes[1])
                else
                    pass+=randomChar(arrayCharTypes[2])
            case 4:
                if( n===0 )
                    pass+=randomChar(arrayCharTypes[0])
                else if( n===1 )
                    pass+=randomChar(arrayCharTypes[1])
                else if( n===2 )
                    pass+= randomChar(arrayCharTypes[2])
                else
                    pass+=randomChar(arrayCharTypes[3])
        }

    }
    console.log(pass)
}


generatePassword(array)