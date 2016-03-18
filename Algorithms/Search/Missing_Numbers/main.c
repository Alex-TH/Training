#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#define XMIN 10000101

void count_elements(int length,int min,int* arr_elements,int* arr_count) {
    for(int i = 0;i <length;i++) {
        arr_count[arr_elements[i] - min]++;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,m;
    int count_a[MAX] = {0};
    int count_b[MAX] = {0};
    int Xmin = XMIN;
    scanf("%d",&n);
    int list_a[n];
    for(int i = 0;i < n;i++) {
        scanf("%d",&list_a[i]);
        if(list_a[i] < Xmin) Xmin = list_a[i];
    }
    scanf("%d",&m);
    int list_b[m];
    for(int i = 0;i < m;i++) {
        scanf("%d",&list_b[i]);
        if(list_b[i] < Xmin) Xmin = list_b[i];
    }
    count_elements(n,Xmin,list_a,count_a);
    count_elements(m,Xmin,list_b,count_b);
    for(int i = 0;i < MAX;i++) {
        if(count_a[i] != count_b[i]) {
            printf("%d ",i + Xmin);
        }
    }
    return 0;
}

