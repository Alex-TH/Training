#include <stdio.h>
#include <stdlib.h>
 
int compare(const void* num1, const void* num2) {
    return (*(int*) num1 - *(int*) num2);
}

int main() {
    int n, k, i, count;
    scanf("%d%d", &n, &k);
    int *prices = (int *)malloc(sizeof(int)*n);
    for(i=0; i<n; i++) {
        scanf("%d", &prices[i]);
    }        
    int answer = 0;
    int sum = 0;
    // Compute the answer
    qsort(prices, n, sizeof(int), compare);
    for(i = 0;i < n;i++) {
        sum += prices[i];
        if(sum <= k) {
            answer++;
        }
        else {
            break;
        }
    }
    printf("%d\n", answer);
      
    return 0;
}

