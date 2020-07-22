
const vowels = "aeiouAEIOU"

let textIllo = "Que pasa chavales aqui andamos los colegas"


// for (let i = 0; i < textIn.length ; i++) {
//     console.log(`${textIn[i]}`)
// }

let wordStart = [0]

function findWordStart(text){

    for(let i = 0; i < text.length; i++){
        if(text[i] === ' ')
        {
            wordStart.push(i+1)
            // console.log(wordStart)
        }
    }
}

const addWhenVowel = 'way'
const addWhenConsonant = 'ay'


function translate(textIn){

    findWordStart(textIn)

    for(let i = 0; i < wordStart.length -1 ; i++){
        if( vowels.includes( textIn[wordStart[i]] ))
        {
            textIn = textIn.substring(0,wordStart[i+1]-1) + addWhenVowel + textIn.substring(wordStart[i+1]-1, textIn.length)
            for(let j = i; j < wordStart.length-1; j++){
                wordStart[j+1]+=3
            }
            
        }
        else
        {
            textIn = textIn.substring(0, wordStart[i]) + textIn.substring(wordStart[i]+1,wordStart[i+1]-1) + textIn[wordStart[i]] + addWhenConsonant + textIn.substring(wordStart[i+1]-1, textIn.length)
            for(let j = i; j < wordStart.length-1; j++){
                wordStart[j+1]+=2
            }

        }
    }

    if( vowels.includes( textIn[ wordStart[ wordStart.length-1 ] ] ))
        textIn +=  addWhenVowel 
    else
        textIn = textIn.substring(0, wordStart[ wordStart.length-1 ]) + textIn.substring(wordStart[wordStart.length-1]+1, textIn.length) + textIn[wordStart[wordStart.length-1]] + addWhenConsonant 


    console.log(textIn)
}

translate(textIllo)





