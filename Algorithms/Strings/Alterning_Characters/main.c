#include <stdio.h>
#include <string.h>
#define MAX 1000000

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int T;
    scanf("%d",&T);
    while(T-- > 0) {
        char str[MAX + 1];
        scanf("%s",str);
        int length = strlen(str);
        int total = 0;
        char previous = str[0];
        for(int i = 1;i < length;i++) {
            if(previous == str[i]) {
                total++;
            }
            else {
                previous = str[i];
            }
        }
        printf("%d\n",total);
    }
    return 0;
}

