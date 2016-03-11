#include <stdio.h>

int main(){
    int n; 
    int t; 
    scanf("%d %d",&n,&t);
    int width[n];
    for(int width_i = 0; width_i < n; width_i++){
       scanf("%d",&width[width_i]);
    }
    for(int a0 = 0; a0 < t; a0++){
        int i; 
        int j;
        int max_width = 3;
        scanf("%d %d",&i,&j);
        for(int k = i;k <= j && max_width != 1;k++){
            if(width[k] < max_width) max_width = width[k];
        }
        printf("%d\n",max_width);
    }
    return 0;
}

