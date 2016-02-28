#include <stdio.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int T;
    scanf("%d",&T);
    while(T-- > 0) {
        int px,py,qx,qy;
        scanf("%d %d %d %d",&px,&py,&qx,&qy);
        printf("%d %d\n",qx + (qx - px),qy + (qy - py));
    }
    return 0;
}

