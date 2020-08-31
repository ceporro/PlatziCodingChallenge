function random(min, max){

    var res;
    res = Math.floor(Math.random() * (max - min +1)) + min;
    return res;

}

function throwDice(faces, times){

    let rolls = []

    for(let i=0; i<times; i++ ){

        let number = random(1, faces)

        rolls.push(number)

    }

    return rolls

}


function battle(rolls){

    let rolls1 = throwDice(6, rolls) 
    let rolls2 = throwDice(6, rolls) 
    let rolls3 = throwDice(6, rolls) 

    const reducer = (acum, rolls) => acum+rolls

    let player1 = rolls1.reduce( reducer , 0 )
    let player2 = rolls2.reduce( reducer , 0 )
    let player3 = rolls3.reduce( reducer , 0 )

    console.log(`player1 rolls: ${rolls1} => score 1: ${player1}`)
    console.log(`player2 points: ${rolls2} => score 2: ${player2}`)
    console.log(`player3 points: ${rolls3} => score 3: ${player3}`)

    
    if( player1 === player2 && player1 === player3 )
        console.log('Triple tie!')
    else if( player1 === player2 && player1 > player3 )
        console.log('Player 3 lose!')
    else if( player1 === player3 && player1 > player2 )
        console.log('Player 2 lose!')
    else if( player3 === player2 && player3 > player1)
        console.log('Player 1 lose!')
    else if( player1 > player2 && player1 > player3 )
        console.log('Player 1 win!')
    else if( player2 > player3 && player2 > player1 )
        console.log('Player 2 win!')
    else if( player3 > player2 && player3 > player1 )
        console.log('Player 3 win!')

}


battle(2)
battle(5)

export default throwDice