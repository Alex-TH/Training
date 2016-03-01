#Day 2: Error Handling -Try, Catch, and Finally

##Objective 
In this challenge, we will learn the use of try(), catch(), and finally statements to handle exceptions.

Errors detected during execution are called exceptions.

##Examples

  + EvalError: Creates an instance representing an error that occurs regarding the global function eval().  
  + InternalError: Creates an instance representing an error that occurs when an internal error in the JavaScript engine is thrown. E.g. "too much recursion".  
  + RangeError: Creates an instance representing an error that occurs when a numeric variable or parameter is outside of its valid range.  
  + ReferenceError: Creates an instance representing an error that occurs when dereferencing an invalid reference.  
  + SyntaxError: Creates an instance representing a syntax error that occurs while parsing code in eval().  
  + TypeError: Creates an instance representing an error that occurs when a variable or parameter is not of a valid type.  
  + URIError: Creates an instance representing an error that occurs when encodeURI() or decodeURI() are passed as invalid parameters.  

source : https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Error

##Handling Exceptions

The statements try, catch and finally can be used to handle selected exceptions. A try statement may have more than one catch clause to specify handlers for different exceptions.

The try statement allows you to define a block of code to be tested for errors while it is being executed.

The catch statement allows you to handle the error.

The finally statement allows you to execute code, after try and catch statements, regardless of the result.

##SAMPLE CODE

```
var a = 1;  
//var p = 2;  

try{  

    a = 1/p;  
    console.log(`New value of 'a' is ${a}`);  

} catch (err){  

   console.log(err.message);  

} finally {  

    console.log(`Final value of 'a' is ${a}`)  

}  
```

##OUTPUT

```
p is not defined
Final value of 'a' is 1
```

##Task

You are given a variable my_string. 
You have to try reversing the string using my_string.split('').reverse().join('') and then print the reversed string to the console. 
If the try clause has an error, print the error message to the console. 
Finally, print the typeof of variable my_string to the console.

##Output Format

The statement to print in the try block is:  

```
Reversed string is : ${my_string}  
```

The statement to print in the catch block is:

```
Error : ${err.message}  
```

The statement to print in the finally block is:

```
Type of my_string is : ${typeof my_string}  
```

##Sample Input

Test Case 00  

```
"1234"  
```

Test Case 01  

```
Number(1234)  
```

##Sample Output

Test Case 00

```
Reversed string is: 4321  
Type of my_string is: string  
```

Test Case 01  

```
Error: my_string.split is not a function  
Type of my_string is: number  
```

