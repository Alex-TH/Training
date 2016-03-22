#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/*
 * Complete the function below.
 */
int maxXor(int l, int r) {
    int p = (int)(floor(log2(l^r))) + 1;
    return pow(2,p) - 1;
}
int main() {
    int res;
    int _l;
    scanf("%d", &_l);
    
    int _r;
    scanf("%d", &_r);
    
    res = maxXor(_l, _r);
    printf("%d", res);
    
    return 0;
}

