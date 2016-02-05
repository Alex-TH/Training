#include <stdio.h>
#include <stdlib.h>

int get_sum(int since, int until, int* ar) {
    int sum = 0;
    for(int i = since;i < until;i++) {
        sum += ar[i];
    }
    return sum;
}

int find_element(int n, int* ar) {
    int right_sum = get_sum(1,n,ar);
    int left_sum = 0;
    for(int i = 1;i < n;i++) {
        right_sum -= ar[i];
        left_sum += ar[i - 1];
        if(right_sum == left_sum) {
            return i;
        }
    }
    return left_sum == right_sum ? 0 : -1;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int T;
    scanf("%d",&T);
    while(T-- > 0) {
        int* ar;
        int n;
        scanf("%d",&n);
        ar = (int *)malloc(n * sizeof(int));
        for(int i = 0;i < n;i++){
            scanf("%d",&ar[i]);
        }
        if(find_element(n,ar) >= 0) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}

