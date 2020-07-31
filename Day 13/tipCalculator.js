
function plate(price, n){
    this.price = price;
    this.n = n;
}

function constructMenu(){
    
    let nPlates = prompt("How many different plates?")
    
    let plates = []
    
    let totalPrice = 0

    const TIP = 0.1

    for(let i=0; i<nPlates; i++){
    
        plates.push( new plate( prompt(`Type the price of the plate ${i+1}:`), prompt("Type the unities consumed: ") ) )
           
    }

    console.log(plates)

    for(let i=0; i < plates.length; i++){

        totalPrice += plates[i].price * plates[i].n 

    }

    tip = totalPrice*TIP

    console.log(`The total price is ${totalPrice}`)
    console.log(`The tip for you is ${tip}!`)

}

constructMenu()
