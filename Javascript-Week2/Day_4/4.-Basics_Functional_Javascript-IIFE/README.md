#Basics of Functional Javascript - IIFE

##Objective 
In this challenge, we learn about Immediately Invoked Function Expressions (IIFEs) that run as soon as they are defined.

##Resources 
An IIFE (Immediately Invoked Function Expression) is a JavaScript function that runs as soon as it is defined. They can be written in different ways, though a common convention is to enclose both the function expression and invocation in parentheses.

```
  (function() {  
    // the code here is executed once in its own scope  
  })();  
```

Passing variables into the scope is done as follows:

```
  (function(a, b) {  
    // a == 'Hello'  
    // b == 'IIFE'  
  })('Hello', 'IIFE');  
```

The advantage of the IIFE is that any vars declared inside it are inaccessible to the outside world.

###SAMPLE CODE

```
  var sulphuricAcid = (function(){  
	  var corrosive = true;  
  	var pH = 2;  
	  return {   
  		property: function(){  
  			console.log(`Corrosive : ${corrosive}`);  
	  		console.log(`pH acidic : ${pH < 7}`);  
  		}  
	  };  
  })();  
  
  console.log(sulphuricAcid.pH);  // Outputs: undefined, we can't access private properties.  
  sulphuricAcid.property();  
```

###OUTPUT

```
undefined  
Corrosive : true  
pH acidic : true  
```

As you can see, we used the IIFE's return value to make sulphuricAcidsulphuricAcid's utility functions publicly accessible while simultaneously ensuring that its pHpH and corrosivecorrosive values remained inaccessible.

##Task

You are given an object, captcha_checkcaptcha_check. Your task is to change captcha_checkcaptcha_check into an IIFE so that the botbot variable is unable to access the actual_captchaactual_captcha.  

