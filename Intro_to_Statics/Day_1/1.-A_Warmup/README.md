Objective 
In this challenge, we practice calculating the mean, median, mode, standard deviation, and confidence intervals in statistics.

##Task 
Given a single line of N space-separated integers describing an array, calculate and print the following:

Mean (m): The average of all the integers.

Array Median: If the number of integers is odd, display the middle element. Otherwise, display the average of the two middle elements.

Mode: The element(s) that occur most frequently. If multiple elements satisfy this criteria, display the numerically smallest one.

Standard Deviation (σ)  

Other than the modal values (which should all be integers), the answers should be in decimal form, correct to a single decimal point, 0.00.0 format. An error margin of ±0.1±0.1 will be tolerated for the standard deviation. The mean, mode and median values should match the expected answers exactly.

Assume the numbers were sampled from a normal distribution. The sample is a reasonable representation of the distribution. A user can approximate that the population standard deviation ≃≃ standard deviation computed for the given points with the understanding that assumptions of normality are convenient approximations.

##Scoring 
Scoring is proportional to the number of test cases cleared.

##Input Format

The first line contains an integer, NN, denoting the number of elements in the array. 
The second line contains NN space-separated numbers describing the elements of the array.

##Constraints

10 ≤ N ≤ 2500  
0 < xi ≤ 10^5  

##Output Format

A total of five lines are required (in the following order:

  1.- Mean (format: 0.0) on the first line.  
  2.- Median (format: 0.0) on the second line.  
  3.- Mode(s) (numerically smallest integer in the case of multiple integers)  
  4.- Standard Deviation (format: 0.0)  

##Sample Input

```
10  
64630 11735 14216 99233 14470 4978 73429 38120 51135 67060  
```
##Sample Output

```
43900.6  
44627.5  
4978  
30466.9  
```

