function random(min, max)
{
    var res;
    res = Math.floor(Math.random() * (max - min +1)) + min;
    return res;
}

const chars = `#$%()/&"`

function getNRandomChars(text, n){

    textOut = ""

    for( let i=0; i<n; i++){
        let randomChar = text.charAt(random(0,text.length))
        textOut+= randomChar
    }
    console.log("Remember this text:")
    console.log(textOut)

    return textOut
}

function requestNChars(n){

    console.clear()

    userText = ""

    for( let i=0; i<n; i++){
        let userChar = prompt(`Type a char of theese: ${chars}`)
        if(chars.includes(userChar))
            userText+= userChar
        else{
            i--
            alert("This character is not valid")
        }
    }
    console.log(`Your text is ${userText}`)

    return userText
}

randomText = getNRandomChars(chars, 4)

setTimeout( function(){
    
    userText = requestNChars(4)

    if( randomText === userText)
        console.log("Your sequence is correct! Congratulations!")
    else
        console.log("Your sequence is wrong! Sorry!")

}, 8000)