#include <stdio.h>

unsigned int and_product(unsigned int a, unsigned int b) {
    unsigned int c = b - a;
    unsigned int max = 0x80000000;
    unsigned int d = 1;
    if(c > max) {
        d = 0xFFFFFFFF;
    }
    else {
        while(d < c) {
            d *= 2;
        }
        d--;
    }
    return a & b & (0xFFFFFFFF ^ d);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int T;
    scanf("%d",&T);
    while(T-- > 0) {
        unsigned int a,b;
        scanf("%u %u",&a,&b);
        printf("%u\n",and_product(a,b));
    }
    return 0;
}

