var bank1 = {
    MONTHLY_INTEREST: 0.04,
    YEAR_PLUS: 0
}

var bank2 = {
    MONTHLY_INTEREST: 0.03,
    YEAR_PLUS: 0.07
}

const MONTHLY_INTEREST = 0.04
const INITIAL_MONEY = 100

function calculateFinalMoney(initial, bank, months){

    finalMoney = initial

    for( let i=0; i<months; i++){
        finalMoney *= 1+bank.MONTHLY_INTEREST
        if(i%11 == 0 && i!=0){
            finalMoney *= 1+bank.YEAR_PLUS
        }
    }

    console.log(finalMoney)

    return finalMoney

}

function compareBanks(bank1, bank2, months){

    let finalBank1 = calculateFinalMoney(INITIAL_MONEY, bank1, months)
    let finalBank2 = calculateFinalMoney(INITIAL_MONEY, bank2, months)

    if(finalBank1 > finalBank2)
        console.log(`In ${months} months the final money is greater in the bank 1; ${finalBank1} > ${finalBank2}`)
    else if(finalBank1 < finalBank2)
        console.log(`In ${months} months the final money is greater in the bank 2; ${finalBank2} > ${finalBank1}`)

}

compareBanks(bank1, bank2, 6)
compareBanks(bank1, bank2, 12)
compareBanks(bank1, bank2, 24)