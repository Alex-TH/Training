#include <stdio.h>
#include <stdlib.h>

void find_sum(int m,int n,int* ar,int* indexes) {
    for(int i = 0;i < n - 1;i++) {
        if(ar[i] < m) {
            for(int j = i + 1;j < n;j++) {
                if(ar[i] + ar[j] == m) {
                    indexes[0] = i + 1;
                    indexes[1] = j + 1;
                    return;
                }
            }
        }
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int T;
    scanf("%d",&T);
    while(T-- > 0) {
        int m, n;
        int indexes[2] = {0};
        int* ar;
        scanf("%d %d",&m,&n);
        ar = (int *)malloc(n * sizeof(int));
        for(int i = 0;i < n;i++) {
            scanf("%d",&ar[i]);
        }
        find_sum(m,n,ar,indexes);
        printf("%d %d\n",indexes[0], indexes[1]);
    }
    return 0;
}

