#Basics of Functional Javascipt - Currying

##Objective 
In this challenge, we use currying to transform functions.

##Resources 
Currying can be described as transforming a function that takes N arguments so that it can be called as a chain of N functions, each taking a single argument.

###SAMPLE CODE

```javascript
  "use strict"  
  let greetings = from =>   
	  		message =>   
              			recipient =>   
                          		'Dear ${recipient},\n\t${message}\n${from}.';  
  
  let person = greetings("Jerry");                   
  let message = person("Happy Birthday!")  
  let to = message('Tom')  
  console.log(to)  
  
  //OR  
  
  console.log(greetings('Jerry')("Happy Birthday!")('Tom'));  
```

###OUTPUT

```
Dear Tom,  
    Happy Birthday!  
Jerry.  
Dear Tom,  
    Happy Birthday!  
Jerry.  
```

Note: Some functional JavaScript libraries such as Ramda have more flexible currying functions. They can break out a function's parameters and allow you to pass them individually (or in groups) to create custom curried variations.

##Task

You are given partially completed code. Your task is to fill in the blanks (_______). 
Here, pressurepressure is a function that contains nested arrow functions taking single arguments.

