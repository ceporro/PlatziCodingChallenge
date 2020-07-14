
function repeatWord(word, n){
    if(n==0)
        return ''
    console.log(word)
    repeatWord(word, n-1)
}

let word = prompt("Type the word you want to repeat:")
let n = prompt("How many times do you want to repeat it?")

repeatWord(word, n)

repeatWord("Ceporro", 3)
