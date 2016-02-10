function processData(myArray) {
    var length = myArray.length;
    var largest = 0;
    var secondLargest = 0;
    for(var i = 0;i < length;i++) {
        if(myArray[i] > largest) {
            secondLargest = largest;
            largest = myArray[i];
        }
        if(myArray[i] > secondLargest && myArray[i] < largest) {
            secondLargest = myArray[i];
        }
    }
    console.log(secondLargest);
}


// tail starts here
process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", function (input) {
    _input += input;
});

process.stdin.on("end", function () {
   processData(_input.split('\n')[1].split(' ').map(Number));
});

