function sphereVol(){

    let r = prompt("Type the sphere radius:")

    let vol = 4/3*Math.PI*Math.pow(r,3)

    console.log(`The volume is ${vol}`)

}

function cubeVol(){

    let a = prompt("Type the cube edge:")

    let vol = Math.pow(a,3)

    console.log(`The volume is ${vol}`)

}

function cylinderVol(){

    let r = prompt("Type the base radius:")
    let h = prompt("Type the cylinder height:")

    let area = Math.PI*Math.pow(r,2)

    let vol = area * h

    console.log(`The volume is ${vol}`)

}

cylinderVol()
sphereVol()
cubeVol()
