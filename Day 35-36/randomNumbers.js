function random(min, max){

    var res;
    res = Math.floor(Math.random() * (max - min +1)) + min;
    return res;

}

function throwDices(faces){

    let number = random(1, faces)

    console.log( number )
    
}

throwDices(6)
throwDices(10)
throwDices(12)

let n = prompt('How many times do you want to throw the dice?')

for(let i=0; i<n; i++ ){

    throwDices(14)

}