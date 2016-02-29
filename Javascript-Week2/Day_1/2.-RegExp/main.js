// declare var re here
// var re = /[aeiou]/;
// var re = new RegExp("[aeiou]");
var re = /^([aeiou]).*\1$/gi;

process.stdin.resume();
process.stdin.setEncoding("ascii");

var input = "";

process.stdin.on("data", function (line) {
    input += line;
});

process.stdin.on("end", function () {
    console.log(re.test(input));
});

