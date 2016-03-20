#include <stdio.h>

int main() {
    int N;
    int i, symbolCount;
    scanf("%d", &N);
    for(i = 1; i <= N; i++){
        for(symbolCount = 0; symbolCount < N; symbolCount++) {
            if(N - symbolCount > i) printf(" ");
            else printf("#");
        }
        printf("\n");
    }
    return 0;
}

