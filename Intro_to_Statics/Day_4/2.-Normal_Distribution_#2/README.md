#Normal Distribution #2

##Objective 
In this challenge, we practice solving problems with normally distributed variables.

##Task 
In a certain plant, the time taken to assemble a car is a random variable having a normal distribution with a mean of 20 hours and a standard deviation of 2 hours. What is the probability that a car can be assembled at this plant in:

  + Less than 19.519.5 hours?  
  + Between 2020 and 2222 hours?  

##Output Format

Your output must be a floating point/decimal number, correct to a scale of 3 decimal places. You can submit solutions in either of the 2 following ways:

  1.- Solve the problem manually and submit your result as Plain Text. In the text box below, enter 2 lines of floating point/decimal numbers.

  2.- Submit an R or Python program, which uses the above parameters (hard-coded), and computes the answer.

Your answer should resemble something like:

```
0.123
0.456  
``` 
(This is NOT the answer, just a demonstration of the answering format.)

###Correct Answer
```
0.4012937  
0.3413447  
```

###R Script
```
pnorm(19.5,mean=20,sd=2)  
pnorm(22,mean=20,sd=2)-pnorm(20,mean=20,sd=2)  
```
