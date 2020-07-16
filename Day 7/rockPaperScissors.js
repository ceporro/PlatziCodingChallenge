let mov = ["Rock", "Paper", "Scissors" ,"rock", "paper", "scissors"]
    
let points1 = 0
let points2 = 0

function rockPaperScissors(player1, player2){

    if( !mov.includes(player1) )
        console.log('Invalid movement by player 1!')
    else if( !mov.includes(player2) )
        console.log('Invalid movement by player 2!')
    else if(player1 == player2)
        console.log("Tie!")
    else
    {
        //console.log('no tie')
        switch(player1)
        {
            case "Rock":
            case "rock":

                if( player2 == "Paper" )
                {
                    console.log('Player 2 wins!')
                    points2++
                }
                else
                {
                    console.log('Player 1 wins!')
                    points1++
                }
                break;

            case "Paper":
            case "paper":

                if( player2 == ("Scissors" || "scissors") )
                {
                    console.log('Player 2 wins!')
                    points2++
                }
                else
                {
                    console.log('Player 1 wins!')
                    points1++
                }
                break;

            case "Scissors":
            case "scissors":

                if( player2 == ("Rock" || "rock") )
                {
                    console.log('Player 2 wins!')
                    points2++
                }
                else
                {
                   console.log('Player 1 wins!')
                    points1++ 
                }
                    
                break;
            default:
                break;
        }

    }

    if(points1 == 3)
    {
        alert('PLAYER 1 WINS!')
        points1 = 0
        points2 = 0
    }
    else if(points2 == 3)
    {
        alert('PLAYER 2 WINS!')
        points1 = 0
        points2 = 0
    }
}

rockPaperScissors("Rock", "Rock")
rockPaperScissors("Rock", "Paper")
rockPaperScissors("Rock", "Scissors")

rockPaperScissors("Paper", "Rock")
rockPaperScissors("Paper", "Paper")
rockPaperScissors("Paper", "Scissors")

rockPaperScissors("Scissors", "Rock")
rockPaperScissors("Scissors", "Paper")
rockPaperScissors("Scissors", "Scissors")