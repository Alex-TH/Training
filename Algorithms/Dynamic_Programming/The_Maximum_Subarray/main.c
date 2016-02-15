#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) {
    return a > b ? a : b;
}

void print_max(int n, int* ar) {
    int max_contiguos = ar[0];
    int cur_sum = ar[0];
    int max_non_contiguos = ar[0];
    for(int i = 1;i < n;i++) {
        max_non_contiguos = max(max(max_non_contiguos,max_non_contiguos + ar[i]),ar[i]);
        cur_sum = max(ar[i],cur_sum + ar[i]);
        max_contiguos = max(cur_sum, max_contiguos);
    }
    printf("%d %d\n", max_contiguos,max_non_contiguos);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int T;
    scanf("%d",&T);
    while(T-- > 0) {
        int n;
        int *ar;
        scanf("%d",&n);
        ar = (int *)malloc(n * sizeof(int));
        for(int i = 0;i < n;i++) {
            scanf("%d",&ar[i]);
        }
        print_max(n,ar);
    }
    return 0;
}

