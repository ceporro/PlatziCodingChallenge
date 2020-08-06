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
    console.log(textOut)
}

getNRandomChars(chars, 4)