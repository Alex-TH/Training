#include <stdio.h>

int grow(int cycles) {
    int spring = 1, height = 1;
    for(int i = 0;i < cycles;i++) {
        height = spring == 1 ? height * 2 : height + 1;
        spring *= -1;
    }
    return height;
}

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        scanf("%d",&n);
        printf("%d\n",grow(n));
    }
    return 0;
}

