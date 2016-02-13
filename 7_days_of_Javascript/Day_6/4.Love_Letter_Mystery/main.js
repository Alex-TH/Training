function minimum_operations(s) {
    var reverse = s.split('').reverse().join('');
    var until = s.length/2;
    var operations = 0;
    for(var i = 0;i < until;i++) {
        var diff = Math.abs(s.charCodeAt(i) - reverse.charCodeAt(i));
        if(diff > 0) {
            operations += diff;
        }
    }
    
    return operations;
}

function processData(input) {
    //Enter your code here
    var lines = input.split('\n');
    var T = Number(lines[0]);
    for(var i = 1;i <= T;i++) {
        console.log(minimum_operations(lines[i]));
    }
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

