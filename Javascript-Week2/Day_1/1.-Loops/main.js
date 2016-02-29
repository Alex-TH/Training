// complete the function
function vowelsAndConsonants(s) {
    var consonants = [];
    for(var c of s) {
        if(c === 'a' || c === 'e' || c === 'i' || c === 'o' || c === 'u' ||
           c === 'A' || c === 'E' || c === 'I' || c === 'O' || c === 'U') {
            console.log(c);   
        }
        else {
            consonants.push(c);
        }
    }
    for(var c of consonants) {
        console.log(c);
    }
}

