console.log("The equation I'll solve is: a·x^2 + b·x + c = 0")

let a = prompt("Type the first coeficient (a):")
let b = prompt("Type the second coeficient (b):")
let c = prompt("Type the independent coeficient (c):")

function solveCuadEq(a, b, c){
    
    let r = Math.pow( b, 2 ) - 4*a*c

    if( r < 0 )
        console.log(`The equation ${a}·x^2 + ${b}·x + ${c} = 0 hasn't solution in the real numbers`)
    else if(a === 0){
        let x = -c/b
        console.log(`The solution for ${b}·x + ${c} = 0 is x=${x}`)
    }
    else if(r === 0){
        let x = -b/(2*a)
        console.log(`The solution for ${a}·x^2 + ${b}·x + ${c} = 0 is double x=${x}`)
    }
    else{
        let x1 = ( -b + Math.sqrt(r) )/(2*a)
        let x2 = ( -b - Math.sqrt(r) )/(2*a)
        console.log(`The solutions for ${a}·x^2 + ${b}·x + ${c} = 0 are x1=${x1} and x2=${x2}`)
    }

}

solveCuadEq(a, b, c)
solveCuadEq(0, b, c)
solveCuadEq(a, 0, c)
solveCuadEq(a, b, 0)