#include <stdio.h>
#include <stdlib.h>

void print_array(int n, int* ar) {
    for(int i = 0;i < n;i++){
        printf("%d ",ar[i]);
    }
}

void order(int n,int* times,int* arranged) {
    int i = 0;
    while(i < n) {
        int lower = times[i];
        int index = i;
        for(int j = i + 1;j < n;j++) {
            if(times[j] < lower) {
                lower = times[j];
                index = j;
            }
        }
        //print_array(n,times);
        //printf("\n");
        if(index != i) {
            int aux = arranged[index];
            times[index] = times[i];
            times[i] = lower;
            arranged[index] = arranged[i];
            arranged[i] = aux;
        }
        i++;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    int* times;
    int* arranged;
    scanf("%d",&n);
    times = (int *)malloc(n * sizeof(n));
    arranged =  (int *)malloc(n * sizeof(n));
    for(int i = 0;i < n;i++) {
        int arrival, time;
        scanf("%d %d",&arrival,&time);
        times[i] = arrival + time;
        arranged[i] = i + 1;
    }
    order(n,times,arranged);
    print_array(n,arranged);
    return 0;
}

