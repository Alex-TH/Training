function print_line(peaks) {
    var result = '';
    var peak = String.fromCharCode(9585) + String.fromCharCode(9586);
    for(var i = 0;i < peaks;i++) {
        result += peak;
    }
    console.log(result);
}

function print_pattern(lines,peaks) {
    for(var i = 0;i < lines;i++) {
        print_line(peaks);
    }
}

function processData(input) {
    //Enter your code here
    print_pattern(14,7);
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

