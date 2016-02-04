#include <stdio.h>
#include <stdlib.h>

void print_arr(int ar_size, int* ar) {
    for(int i = 0;i < ar_size;i++) {
        printf("%d ",ar[i]);
    }
    printf("\n");
}

void insertionSort(int ar_size, int *  ar) {
    int e = ar[ar_size - 1], i;
    for(i = ar_size - 2;i >= 0;i--) {
        if(ar[i] > e) {
            ar[i + 1] = ar[i];
        }
        else {
            break;
        }
        print_arr(ar_size, ar);
    }
    ar[i + 1] = e;
    print_arr(ar_size, ar);
}
int main(void) {
   
   int _ar_size;
   scanf("%d", &_ar_size);
   int _ar[_ar_size], _ar_i;
   for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
       scanf("%d", &_ar[_ar_i]); 
   }

   insertionSort(_ar_size, _ar);
   
   return 0;
}

