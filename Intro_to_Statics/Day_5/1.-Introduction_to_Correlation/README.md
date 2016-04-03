##Objective 
In this challenge, we practice calculating correlation. Check out the Resources tab to learn more!

##Task 
You are provided the popularity scores for a set of juices (the higher, the better):

```
[10, 9.8, 8, 7.8, 7.7, 7, 6, 5, 4, 2]  
```

These are the respective prices for the juices:

```
[200, 44, 32, 24, 22, 17, 15, 12, 8, 4]  
```
Write a program computing (or calculate manually) the Pearson coefficient and the Spearman Rank coefficient of correlation between these values.

##Output Format

You must have 2 lines of output:

  1.- The first line must contain the Pearson coefficient, correct to a scale of 3 decimal places.  
  2.- The second line must contain the Spearman coefficient, correct to a scale of 1 decimal place.  

You can submit solutions in either of the 22 following ways:

  1.- Solve the problem manually and submit your result as Plain Text. In the text box below, enter 2 lines of floating point/decimal numbers.  
  2.- Submit an R or Python program, which uses the above parameters (hard-coded), then computes and prints the answer.  
Your answer should look similar to the below figures, and must not contain any extra white space or newline characters:

```
0.758  
0.6  
```

###Correct Answer
```
0.612  
1  
```

###R Script
```
# Enter your code here. Read input from STDIN. Print output to STDOUT  
juices = c(10, 9.8, 8, 7.8, 7.7, 7, 6, 5, 4, 2)  
prices = c(200, 44, 32, 24, 22, 17, 15, 12, 8, 4)  
rgjuices = rank(-juices)  
rgprices = rank(-prices)  
cov(juices,prices)/(sd(juices) * sd(prices))  
cov(rgjuices,rgprices)/(sd(rgjuices) * sd(rgprices))  
```

