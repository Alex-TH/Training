#include <stdio.h>
#include <math.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int T;
    scanf("%d",&T);
    while(T-- > 0) {
        int a,b;
        int squares;
        scanf("%d %d",&a,&b);
        squares = (int)(floor(sqrt(b))-ceil(sqrt(a))+1);
        printf("%d\n",squares);
    }
    return 0;
}

