#Normal Distribution #1

##Objective 
In this challenge, we practice solving problems with normally distributed variables.

##Task 
X is a normally distributed variable with a mean of μ=30 and a standard deviation of σ=4. Find:

P(x < 40)
P(x > 21)
P(30 < x < 35)

##Output Format

Your output must be a floating point/decimal number, correct to a scale of 3 decimal places. You can submit solutions in either of the 2 following ways:

  1.- Solve the problem manually and submit your result as Plain Text. In the text box below, enter 3 lines of floating point/decimal numbers.

  2.- Submit an R or Python program, which uses the above parameters (hard-coded), and computes the answer.

Your answer should resemble something like:

```
0.123  
0.456  
0.789  
``` 
(This is NOT the answer, just a demonstration of the answering format.)

###Correct Answer
```
0.994  
0.988  
0.394  
```
###R script
```
fix <- function(x, k) format(round(x, k), nsmall=k)  
fix(pnorm(40,mean=30,sd=4),3)  
fix(pnorm(21,mean=30,sd=4, lower.tail=FALSE),3)  
fix(pnorm(35,mean=30,sd=4)-pnorm(30,mean=30,sd=4),3)  
```

