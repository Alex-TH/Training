function print_star(height) {
    var result = '*';
    for(var i = 1;i < height;i++) {
        result = ' ' + result + ' ';
    }
    console.log(result);
}
function print_tree(height) {
    var zeros = 1;
    print_star(height);
    for(var i = 1;i <= height;i++) {
        var result = '';
        for(var j = 0;j < zeros;j++) {
            result += '0';
        }
        for(var j = 0; j < height - i;j++) {
            result = ' ' + result + ' ';
        }
        console.log(result);
        zeros += 2;
    }
}

function processData(input) {
    //Enter your code here
    print_tree(9);
} 

process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", function (input) {
    _input += input;
});

process.stdin.on("end", function () {
   processData(_input);
});

