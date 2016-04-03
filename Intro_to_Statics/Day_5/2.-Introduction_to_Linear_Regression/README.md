##Objective 
In this challenge, we practice using linear regression techniques. Check out the Resources tab to learn more!

##Task 
You are given the Math aptitude test (x) scores for a set of students, as well as their respective scores for a Statistics course (y). The students enrolled in Statistics immediately after taking the math aptitude test.

The scores (xx, yy) for each student are:

```
(95,85)  
(85,95)  
(80,70)  
(70,65)  
(60,70)  
```
If a student scored an 80 on the Math aptitude test, what score would we expect her to achieve in Statistics? Determine the equation of the best-fit line using the least squares method, and then compute the value of y when x=80.

##Output Format

You can submit solutions in either of the 2 following ways:

  1.- Solve the problem manually and submit your result as Plain Text. In the text box below, enter a single floating point/decimal number denoting the score.  
  2.- Submit an R or Python program, which uses the above parameters (hard-coded), then computes and prints the score.  

Your answer should follow the format below, and must not contain any extra white space or newline characters:

```
60.5  
```

###Correct Answer
```
78.3
```

###R Script
```
N = 5  
X = c(95,85,80,70,60)  
Y = c(85,95,70,65,70)  
XX = X * X  
Xsum = sum(X)  
b = (N * sum(X * Y) - sum(X) * sum(Y))/(N * sum(XX) - (Xsum * Xsum))  
a = (sum(Y) - (Xsum * b))/N  
a + b*80  
```

