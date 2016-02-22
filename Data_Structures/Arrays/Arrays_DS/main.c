#include <stdio.h>
#include <stdlib.h>

void print_reverse(int n, int* arr) {
    for(int i = n - 1;i >= 0;i--) {
        printf("%d ",arr[i]);
    }
}

int main(){
    int n; 
    scanf("%d",&n);
    int *arr = malloc(sizeof(int) * n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    print_reverse(n,arr);
    return 0;
}

