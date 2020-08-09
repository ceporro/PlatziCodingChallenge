
const MONTHLY_INTEREST = 0.04
const INITIAL_MONEY = 100

function calculateFinalMoney(initial, interes, months){

    finalMoney = initial

    for( let i=0; i<months; i++){
        finalMoney *= 1+interes
    }

    console.log(finalMoney)

}

calculateFinalMoney(INITIAL_MONEY, MONTHLY_INTEREST, 6)
calculateFinalMoney(INITIAL_MONEY, MONTHLY_INTEREST, 12)
calculateFinalMoney(INITIAL_MONEY, MONTHLY_INTEREST, 24)