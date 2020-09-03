function random(min, max){

    let res;
    res = Math.floor(Math.random() * (max - min +1)) + min;
    return res;

}

function minorToMajor(array){

    for( let i=0; i<array.length-1; i++ ){

        for( let j=0; j< array.length-i-1; j++ ){

            if(array[j]>array[j+1]){
                let temp = array[j]
                array[j] = array[j+1]
                array[j+1] = temp
            }

        }

    }
    return array
}



function genRandomIP(){

    let IP = {
        numericIP: 0,
        stringIP: ''
    }

    for( let i=0; i < 3; i++){
        let number = random(0, 255)
        IP.stringIP += number + '.'
        IP.numericIP += number * Math.pow(10, 3*(3-i))
    }
    let number = random(0, 255)

    IP.stringIP += number
    IP.numericIP += number 

    return IP
    
}

function genMultipleIPs(length){

    let arrayIPs = []

    for(let i=0; i<length; i++){

        arrayIPs.push( genRandomIP() )

    }

    return arrayIPs

}

function orderIPlist(arrayIPs){

    for( let i=0; i<arrayIPs.length-1; i++ ){

        for( let j=0; j<arrayIPs.length-i-1; j++ ){

            if(arrayIPs[j].numericIP > arrayIPs[j+1].numericIP){
                let temp = arrayIPs[j]
                arrayIPs[j] = arrayIPs[j+1]
                arrayIPs[j+1] = temp
            }

        }

    }
    return arrayIPs
}

let IPs = genMultipleIPs(1000)
orderIPlist(IPs)