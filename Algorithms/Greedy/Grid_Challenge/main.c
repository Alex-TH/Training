#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    scanf("%d",&T);
    while(T-- > 0) {
        int arranged = 1;
        int N;
        scanf("%d",&N);
        char grid[N][N];
        for(int i = 0;i < N;i++) {
            for(int j = 0;j < N;j++) {
                scanf("%c ",&grid[i][j]);
                while(grid[i][j] == 10) {
                    scanf("%c ",&grid[i][j]);
                }
            }
        }
        
        for(int row = 0;row < N;row++) {
            int i = 0;
            while(i < N) {
                char lower = grid[row][i];
                int index = i;
                for(int j = i + 1;j < N;j++) {
                    int value = grid[row][j];
                    if(value < lower) {
                        lower = value;
                        index = j;
                    }
                }
                if(index != i) {
                    grid[row][index] = grid[row][i];
                    grid[row][i] = lower;
                }
                i++;
            }
        }
        
        for(int i = 0;i < N - 1;i++) {
            for(int j = 0;j < N;j++) {
                //printf("%c",grid[i][j]);
                if(grid[i][j] > grid[i + 1][j]) {
                    arranged = 0;
                    goto end;
                }
            }
            //printf("\n");
        }
        
        end:
        if(arranged == 1) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}

