#Basics of Functional Javascript - Clousure

##Objective 
In this challenge, we learn about closures in JavaScript that refer to independent variables.

##Resources 
Closures are functions that refer to independent (free) variables. In other words, the function defined in the closure 'remembers' the environment in which it was created.

###SAMPLE CODE

```javascript
  function foo(item){  
  	var myPrivateItem = item;  
  	this.getPrivateData = function(){  
  		return myPrivateItem;  
  	};  
  }  
  
  var Tom = new foo('Some private data.');  
  console.log(Tom.myPrivateItem);		//Cannot access myPrivateItem directly.  
  console.log(Tom.getPrivateData());  
```

###OUTPUT

```
undefined  
Some private data.  
```

##Task

Your task is to fill in the blank (_______________________) spaces. 
The multipliermultiplier function takes a single parameter, x, and returns an anonymous function that takes a single parameter, y, and returns the product of x and y (i.e.: x×y).

