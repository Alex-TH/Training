#Error Handling - Throw

##Objective 
In this challenge, we learn to use the throw statement to create custom errors.

##Resources

The throw statement allows you to create custom errors (user-defined exceptions). 
The execution of the current function will stop which means that the statements after the throw won't be executed. Then, control will be passed to the first catch block in the call stack. If no catch block exists among caller functions, the program will terminate.

###SAMPLE CODE

```javascript
  var a = 9;  
  var b = 0;  

  try {  

      if(b === 0){  
          throw new Error("zeroDivisionError");  
      }  
      console.log(a/b);  

  } catch (err) {  
      console.log(err.message);  
  }  
```

###OUTPUT

```
zeroDivisionError
```

##Task

You are given a variable my_height. Your task is to throw errors under the following conditions:

  + notANumberError - When my_height is NaN.  
  + hugeHeightError - When my_height is greater than 10.  
  + tinyHeightError - When my_height is less than 4.  

If none of the errors exist, print my_height.  

##Sample Input

TestCase 00  

```
seven  
```

TestCase 01  

```
7   
```

TestCase 02  

```
0  
```

TestCase 03  

```
8  
```

##Sample Output

TestCase 00  

```
notANumberError  
```

TestCase 01  

```
hugeHeightError  
```

TestCase 02  

```
tinyHeightError  
```

TestCase 03  

```
8  
```

