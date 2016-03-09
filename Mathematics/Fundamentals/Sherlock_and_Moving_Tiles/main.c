#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    long double L,S1,S2,length;
    int Q;
    int speed;
    scanf("%Lg %Lg %Lg",&L,&S1,&S2);
    scanf("%d",&Q);
    speed = abs(S1 - S2);
    length = sqrt(L * L * 2);
    while(Q-- > 0) {
        long double q;
        long double t;
        scanf("%Lg",&q);
        t = (length - sqrt(q * 2))/speed;
        printf("%.20Lf\n", t >= 0 ? t : 0);
    }
    return 0;
}

