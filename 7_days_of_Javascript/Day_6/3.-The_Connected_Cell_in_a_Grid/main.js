function get_length(matrix,m,n,initial_i,initial_j) {
    var length = 1;
    var queue = [];
    queue.push([initial_i,initial_j]);
    matrix[initial_i][initial_j] = 0;
    while(queue.length > 0) {
        var i = queue[0][0];
        var j = queue[0][1];
        var right = j + 1 < n;
        var left = j > 0;
        var up =  i > 0;
        var down =  i + 1 < m;
        queue = queue.slice(1);
        if(right && matrix[i][j + 1] === 1) {
            queue.push([i, j + 1]);
            matrix[i][j + 1] = 0;
            length++;
        }
        if(left && matrix[i][j - 1] === 1) {
            queue.push([i, j - 1]);
            matrix[i][j - 1] = 0;
            length++;
        }
        if(up && matrix[i - 1][j] === 1) {
            queue.push([i - 1, j]);
            matrix[i - 1][j] = 0;
            length++;
        }
        if(down && matrix[i + 1][j] === 1) {
            queue.push([i + 1, j]);
            matrix[i + 1][j] = 0;
            length++;
        }
        if((up && right) && matrix[i -1][j + 1] === 1) {
            queue.push([i - 1, j + 1]);
            matrix[i - 1][j + 1] = 0;
            length++;
        }
        if((down && right) && matrix[i + 1][j + 1] === 1) {
            queue.push([i + 1, j + 1]);
            matrix[i + 1][j + 1] = 0;
            length++;
        }
        if((up && left) && matrix[i - 1][j - 1] === 1) {
            queue.push([i - 1, j - 1]);
            matrix[i - 1][j - 1] = 0;
            length++;
        }
        if((down && left) && matrix[i + 1][j - 1] === 1) {
            queue.push([i + 1, j - 1]);
            matrix[i + 1][j - 1] = 0;
            length++;
        }
        //console.log(queue);
        //console.log(matrix);
    }
    return length;
}

function find_region(matrix,n,m) {
    var largest_region = 0;
    for(var i = 0;i < m;i++) {
        for(var j = 0;j < n;j++) {
            if(matrix[i][j] === 1) {
                region_length = get_length(matrix,m,n,i,j);
                if(region_length > largest_region) {
                    largest_region = region_length;
                }
            }
        }
    }
    return largest_region;
}

function processData(input) {
    //Enter your code here
    var lines = input.split(/\r?\n/);
    var m = Number(lines[0]);
    var n = Number(lines[1]);
    var matrix = lines.splice(2)
                    .map((s) => s.split(' ').map(v => Number(v)));
    //console.log(matrix);
    console.log(find_region(matrix,n,m));
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

