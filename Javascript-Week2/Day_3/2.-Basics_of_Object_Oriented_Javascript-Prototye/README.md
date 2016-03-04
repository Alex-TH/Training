#Basics of Object Oriented Javascript - Prototypes

##Objective 
In this challenge, we learn to use JavaScript prototypes to add new properties or methods to existing prototypes.

##Resources
The JavaScript prototype property allows you to add new properties/methods to an existing prototype. A prototype is an object from which other objects inherit properties. Every object has a prototype by default. Since prototypes are themselves objects, every prototype has a prototype as well.

###Advantages:

No matter how many objects you create, functions are loaded only once into memory.
It allows you to override functions if required.
When we put something on the prototype, every instance of the object shares the same code for the method. They are all using the same function instance.

###SAMPLE CODE

```javascript
  function Pokemon(pokemonName, pokemonType, pokemonAttackList){  
  	this.name = pokemonName;  
  	this.type = pokemonType;  
  	this.attackList = pokemonAttackList;  
  }  
  
  var Arcanine = new Pokemon("Arcanine", "Fire", ["Ember", "Bite", "FlameThrower"]);  
  var Pikachu = new Pokemon("Pikachu", "Electric", ["Tail Whip", "ThunderBolt", "Agility"]);    
  var Blastoise = new Pokemon("Blastoise", "Water", ["Water Gun", "Hydro Cannon", "Hyper Beam"]);   
  
  
  Pokemon.prototype.callPokemon = function(){   
  	console.log(`I choose you, ${this.name}!`);  
  };  
  
  Pokemon.prototype.attack = function(attack_number){  
  	console.log(`${this.name}! use ${this.attackList[attack_number]}.`);  
  };  
  
  Pikachu.callPokemon();  
  Arcanine.callPokemon();  
  Blastoise.callPokemon();  
  
  Pikachu.attack(1);  
  Arcanine.attack(2);  
  Blastoise.attack(2);  
```

###OUTPUT

```
I choose you, Pikachu!  
I choose you, Arcanine!  
I choose you, Blastoise!  
Pikachu! use ThunderBolt.  
Arcanine! use FlameThrower.  
Blastoise! use Hyper Beam.  
```

Using prototypes is much more efficient. In the above example, the methods are placed on the prototype since we typically want all instances to use the same method. However, the properties are placed on the instance itself because we usually don't want all instances to share the same properties.

##Task

You are given a function, SquareSquare, that takes four parameters, A, B, C and D, denoting the length of the square's edges. 
Using prototype properties, add a method to SquareSquare named isSquareisSquare that prints true if a Square object has equal edges and false if they are unequal.

