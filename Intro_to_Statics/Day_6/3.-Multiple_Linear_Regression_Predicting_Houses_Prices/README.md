#Day 6: Multiple Linear Regression: Predicting House Prices
##Objective 
In this challenge, we practice using multiple linear regression to predict housing prices.

##Task 
Charlie wants to buy a house. He does a detailed survey of the area where he wants to live, in which he quantifies, normalizes, and maps the desirable features of houses to values on a scale of 0 to 1 so the data can be assembled into a table. If Charlie noted F features, each row contains F space-separated values followed by the house price in dollars per square foot (making for a total of F+1 columns). If Charlie makes observations about H houses, his observation table has H rows. This means that the table has a total of (F+1)×H entries.

Unfortunately, he was only able to get the price per square foot for certain houses and thus needs your help estimating the prices of the rest! Given the feature and pricing data for a set of houses, help Charlie estimate the price per square foot of the houses for which he has compiled feature data but no pricing.

Important Observation: The prices per square foot form an approximately linear function for the features quantified in Charlie's table. For the purposes of prediction, you need to figure out this linear function.

Recommended Technique: Use a regression-based technique. At this point, you are not expected to account for bias and variance trade-offs.

##Input Format

The first line contains 2 space-separated integers, F (the number of observed features) and N (the number of rows/houses for which Charlie has noted both the features and price per square foot). 
The N subsequent lines each contain F+1 space-separated integers describing a row in the table; the first F elements are the noted features for a house, and the very last element is its price per square foot.

The next line (following the table) contains a single integer, T, denoting the number of houses for for which Charlie noted features but does not know the price per square foot. 
The T subsequent lines each contain F space-separated integers describing the features of a house for which pricing is not known.

##Constraints

  + 1 ≤ F ≤ 10  
  + 5 ≤ N ≤ 100  
  + 1 ≤ T ≤ 100  
  + 0 ≤ Price Per Square Foot ≤ 106  
  + 0 ≤ Factor Values ≤ 1  

##Output Format

Print T lines, where each line ii contains the predicted price for the ith house (from the second table of houses with unknown prices per square foot).

##Sample Input

```
2 7  
0.18 0.89 109.85  
1.0 0.26 155.72  
0.92 0.11 137.66  
0.07 0.37 76.17  
0.85 0.16 139.75  
0.99 0.41 162.6  
0.87 0.47 151.77  
4  
0.49 0.18  
0.57 0.83  
0.56 0.64  
0.76 0.18  
```
##Sample Output

```
105.22  
142.68  
132.94  
129.71  
```
