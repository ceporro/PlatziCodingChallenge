function recursiveAdd(){

    console.log('We will sum the number you enter')

    let number = parseInt( prompt('Type a number to sum. Type 0 to finish: ') )

    if(isNaN(number)){
        console.log('This is not a number!')
        return recursiveAdd()
    }
    else{
        
        if (number !== 0) 
            return number + recursiveAdd()
        
        else
            return number
        

    }
    
}

recursiveAdd()