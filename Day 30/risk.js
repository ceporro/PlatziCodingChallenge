function random(min, max)
{
    var res;
    res = Math.floor(Math.random() * (max - min +1)) + min;
    return res;
}

function majorToMinor(array){

    for( let i=0; i<array.length-1; i++ ){

        for( let j=0; j< array.length-i-1; j++ ){

            if(array[j]<array[j+1]){
                let temp = array[j]
                array[j] = array[j+1]
                array[j+1] = temp
            }

        }

    }

}

let player1 = [];
let player2 = [];

let soldiers1 = 20;
let soldiers2 = 20;

function throwPlayer1(){
    
    for( let i=0; i<3; i++){
        player1[i] = random(1,6)
    }

    majorToMinor(player1)

    console.log(player1)
}

function throwPlayer2(){
    
    for( let i=0; i<2; i++){
        player2[i] = random(1,6)
    }

    majorToMinor(player2)

    console.log(player2)
}

function battle(){

    if(soldiers1 <= 0 && soldiers2 > 0)
        console.log("Player 1 has loose")
    else if(soldiers2 <= 0 && soldiers1 > 0)
        console.log("Player 2 has loose")
    else if(soldiers2 <= 0 && soldiers1 <= 0)
        console.log("Both players haven't got soldiers!")
    else{

        throwPlayer1()
        throwPlayer2()
        
        for(let i=0; i<2; i++){
          
            if( player1[i] > player2[i] )
            soldiers2--
            if( player2[i] > player1[i] )
            soldiers1--

        }

        if(soldiers1 <= 0)
            console.log("Player 1 lose!")
        else{
            console.log(`Player 1 has ${soldiers1} soldiers`)
        }

        if(soldiers2 <= 0)
            console.log("Player 2 lose!")
        else{
            console.log(`Player 2 has ${soldiers2} soldiers`)
        }

    }

}

while(soldiers1 > 0 && soldiers2 > 0){
    battle()
}