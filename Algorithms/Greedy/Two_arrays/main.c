#include <stdio.h>
#include <stdlib.h>

int compare_up(const void* num1, const void* num2) {
    return (*(int*) num1 - *(int*) num2);
}

int compare_down(const void* num1, const void* num2) {
    return (*(int*) num2 - *(int*) num1);
}

int test_arrays(int length, int k, int* arr_a, int* arr_b) {
    for(int i = 0;i < length;i++) {
        if((arr_a[i] + arr_b[i]) < k) return 0; 
    }
    return 1;
}

void capture_arr(int length,int* arr) {
    for(int i = 0;i < length;i++) {
        scanf("%d",&arr[i]);
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int T;
    scanf("%d",&T);
    while(T-- > 0) {
        int n, k;
        scanf("%d %d",&n,&k);
        int arr_a[n],arr_b[n];
        capture_arr(n,arr_a);
        capture_arr(n,arr_b);
        qsort(arr_a, n, sizeof(int), compare_up);
        qsort(arr_b, n, sizeof(int), compare_down);
        if(test_arrays(n,k,arr_a,arr_b)) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
