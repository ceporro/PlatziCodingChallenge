
let array = [1 ,23, 43, 14, 999, 42, -5, -62, 71 , 0]

function minorToMajor(array){

    for( let i=0; i<array.length-1; i++ ){

        for( let j=0; j< array.length-i-1; j++ ){

            if(array[j]>array[j+1]){
                let temp = array[j]
                array[j] = array[j+1]
                array[j+1] = temp
            }


        }

    }
    console.log(array)
}
function majorToMinor(array){

    for( let i=0; i<array.length-1; i++ ){

        for( let j=0; j< array.length-i-1; j++ ){

            if(array[j]<array[j+1]){
                let temp = array[j]
                array[j] = array[j+1]
                array[j+1] = temp
            }


        }

    }
    console.log(array)
}

minorToMajor(array)
majorToMinor(array)