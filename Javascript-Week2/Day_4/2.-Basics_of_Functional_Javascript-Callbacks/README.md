#Basics of Functional JavaScript - Callbacks

##Objective 
In this challenge, we use callback to pass a function to a different function as a parameter.

##Resources 
In JavaScript, functions are objects that can be passed as parameters to other functions. A callback function, also known as a higher-order function, is a function that is passed to another function as a parameter. The callback function is then called inside that function.

###SAMPLE CODE

```javascript
  function myMap(my_array, callback){  
	  var arr = [];  
  	for(var index in my_array){  
	  	arr.push(callback(my_array[index]));  
  	}  
	  return arr;  
  }  
   
  var some_array = [1, 2, 3, 4, 5, 6, 7, 8, 9];  
  
  console.log(myMap(some_array, (x) => x + 1 ));  //increments array element by 1.  
  console.log(myMap(some_array, (x) => x * 2 ));  //doubles each array element.  
  console.log(myMap(some_array, (x) => x * x ));  //squares each array element.  
```

###OUTPUT

```
[ 2, 3, 4, 5, 6, 7, 8, 9, 10 ]  
[ 2, 4, 6, 8, 10, 12, 14, 16, 18 ]  
[ 1, 4, 9, 16, 25, 36, 49, 64, 81 ]  
```

##Task

Write a myFilter function that takes 2 parameters: my_array and callback. 
Here, my_array is an array of strings and callback is a function that takes the elements of my_array as its parameter and returns a boolean true if the element is even or false if the element is odd. 
The myFilter function should return the filtered array.

###Sample Input

```
4 5 6 7 8 9  
```

###Sample Output

```
[ 4, 6, 8 ]  
```

