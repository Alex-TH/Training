for(var str of my_array) {
    var reverse_str = str.split('').reverse().join('');
    if(str.split(' ').join('') === reverse_str.split(' ').join('')) {
        console.log(str);
    }
}

