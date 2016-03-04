#Basics of Object Oriented Javascrip - Prototype Inheritance  

##Objective 
In this challenge, we learn how to use prototype inheritance to give properties to another function.  

##Resources 
All JavaScript objects inherit the properties and methods from their prototype. Simply put, inheritance is the concept of one thing gaining the properties or behaviors of another.

###SAMPLE CODE

```javascript
  var Animal = function(){};  
  Animal.prototype.eat = function(){  
  	console.log("They eat food to survive.");  
  };  
  
  var Mammal = function(){};  
  Mammal.prototype = new Animal();      //Mammal inherits from Animals  
  Mammal.prototype.giveBirth = function(){  
  	console.log("They give birth to young ones.");    
  };  
  
  var elephant = new Mammal(); //Creating instance of type Mammal  
  elephant.eat();              //elephant can use the inherited method from Animal.  
  elephant.giveBirth();  
  
  console.log(elephant instanceof Mammal);  
  console.log(elephant instanceof Animal);  
```

###OUTPUT

```
They eat food to survive.  
They give birth to young ones.  
true  
true  
```

##Task

You are given 3 functions: AlphaAlpha, VowelVowel, and ConsonantConsonant. 
Your task is to fill in the blanks (__________________________), so that both VowelVowel and ConsonantConsonant inherit their properties and methods from AlphaAlpha.

