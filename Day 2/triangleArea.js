const Triangle = {
    base: 30,
    height: 25,
    area: 0,
    type: ' '
}

function calcTriangleArea(Triangle){
    Triangle.area = Triangle.base * Triangle.height /2
}

function triangleType(Triangle){
    //Another triangle data is needed
    side1 = Triangle.base
    side2 = 30
    x = side1 - Math.sqrt( Math.pow(side2, 2) - Math.pow(Triangle.height, 2) )
    side3 = Math.sqrt( Math.pow(Triangle.height, 2) + Math.pow( x, 2) )

    if(side1 === side2 && side2 === side3){
        Triangle.type = 'Equilateral'
    } else if(side1 !== side2 && side2 !== side3 && side3 !== side1){
        Triangle.type = 'Scalene'
    } else {
        Triangle.type = 'Isosceles'
    }

}

calcTriangleArea(Triangle)
triangleType(Triangle)

console.log(Triangle)