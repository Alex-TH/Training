#include <stdio.h>
#include <string.h>
#define MAX 10

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        char snum[MAX];
        int length;
        int digits = 0;
        scanf("%d",&n);
        sprintf(snum,"%d",n);
        length = strlen(snum);
        for(int i = 0;i < length;i++) {
            if(snum[i] != '0' && n % (snum[i] - '0') == 0) {
                digits++;
            }
        }
        printf("%d\n",digits);
    }
    return 0;
}

