#include <stdio.h>
#include <stdlib.h>

//Never used but is the solution if I have not to loop to get the array
int get_index(int v, int n, int* arr) {
    for(int i = 0;i < v;i++) {
        if(arr[i] == v) {
            return i;
        }
    }
    return -1;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n, v;
    int* arr;
    scanf("%d %d",&v,&n);
    arr = (int *)malloc(n * sizeof(int));
    for(int i = 0; i < n;i++) {
        scanf("%d", &arr[i]);
        if(arr[i] == v) {
            printf("%d", i);
            break;
        }
    }
    return 0;
}

