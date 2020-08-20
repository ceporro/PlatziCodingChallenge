function point(x, y){
    this.x = x
    this.y = y
}

function distance(point1, point2){

    let d = Math.sqrt( Math.pow( (point1.x - point2.x) , 2) + Math.pow((point1.y - point2.y) , 2) )

    console.log(d)

}

const p1 = new point(2,3)
const p2 = new point(4,7)

distance(p1,p2)