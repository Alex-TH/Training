#Basics of Object Oriented Javascript - Constructors

##Objective 
In this challenge, we practice creating objects in JavaScript.

##Resources 

There are different ways to create new objects in JavaScript:

  + Define and create a single object using the object literal {}{}.  

  + Define and create a single object with the keyword new.  

  + Define an object constructor and then create objects of the constructed type.  

A constructor is a function used for initializing new objects. You use the new keyword to call the constructor. You can learn more about the this keyword here.

Constructors makes it easy to create multiple objects that have the same properties and methods.

###SAMPLE CODE

```
  var Book = function(book_name, book_year, book_isbn){  
  
	  this.name = book_name;  
  	this.year = book_year;  
	  this.isbn = book_isbn;  

  };  
  
  var Book_1 = new Book("Harry Potter and the Cursed Child , Parts I & II", "2016", "9781338099133");  
  var Book_2 = new Book("Harry Potter: Collectible Quidditch Set","2016","9780762459452");  
  var Book_3 = new Book("Harry Potter And The Chamber Of Secrets", "2000", "9780439064873");  

  var counter = 1;  

  for(var book of [Book_1, Book_2, Book_3]){  
  	console.log(`  
	  -------------  
  	Book Number ${counter++}   
	  -------------  
  	Name - ${book.name}  
	  Year - ${book.year}  
  	ISBN - ${book.isbn}  
	  `);  
  
  }  
```

###OUTPUT

´´´
-------------  
Book Number 1  
-------------  
Name - Harry Potter and the Cursed Child , Parts I & II  
Year - 2016  
ISBN - 9781338099133  


-------------  
Book Number 2   
-------------  
Name - Harry Potter: Collectible Quidditch Set   
Year - 2016  
ISBN - 9780762459452  


-------------  
Book Number 3   
-------------  
Name - Harry Potter And The Chamber Of Secrets   
Year - 2000  
ISBN - 9780439064873  
```

##Task

Create a constructor function that satisfies the following conditions:

  + The name of the constructor function should be Car.  
  + It should take three parameters: name, mileage and max_speed.  
  + Store these parameter values in their respective this keywords: this.name, this.mileage and this.max_speed.  

