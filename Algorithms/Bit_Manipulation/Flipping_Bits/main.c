#include <stdio.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int T;
    unsigned int MAX = 0xFFFFFFFF;
    scanf("%d",&T);
    while(T-- > 0) {
        unsigned int n;
        scanf("%u",&n);
        printf("%u\n",n ^ MAX);
    }
    return 0;
}

