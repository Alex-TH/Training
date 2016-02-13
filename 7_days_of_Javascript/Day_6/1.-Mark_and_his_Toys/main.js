function processData(input) {
    //Enter your code here
    var lines = input.split('\n');
    //var n = lines[0].split(' ')[0];
    var can_buy = 0;
    var k = lines[0].split(' ')[1];
    var toys = lines[1]
                .split(' ')
                .map((v) => Number(v))
                .sort((a,b) => a > b ? 1 : a < b ? -1 : 0);
    for(var v of toys) {
        if(k > v) {
            k -= v;
            can_buy++;
        }
        else {
            break;
        }
    }
    console.log(can_buy);
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

