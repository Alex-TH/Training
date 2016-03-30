#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int compare(const void* num1, const void* num2) {
    return (*(int*) num1 - *(int*) num2);
}

double mean(int n, int* arr) {
    double result = 0.0;
    for(int i = 0;i < n;i++) {
        result += arr[i];
    }
    return result/n;
}

double median(int n, int* arr) {
    int index = n/2 - 1;
    return n % 2 == 0 ? (double)(arr[index] + arr[index + 1])/ 2 : arr[index];
}

/*The array should be sorted*/
int mode(int n,int* arr) {
    int aparitions = 0;
    int max_aparitions = 0;
    int mode_number = -1;
    int current = -1;
    for(int i = 0;i < n;i++) {
        if(arr[i] != current) {
            if(aparitions > max_aparitions || (aparitions == max_aparitions && current < mode_number)) {
                mode_number = current;
                max_aparitions = aparitions;
            }
            current = arr[i];
            aparitions = 1;
        }
        else {
            aparitions++;
        }
    }
    return mode_number;
}

double standard_deviation(int n, int* arr, double mean) {
    double result = 0.0;
    for(int i = 0;i < n;i++) {
        result += pow(arr[i] - mean,2);
    }
    return sqrt(result/n);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    int arr[n];
    double m;
    for(int i = 0;i < n;i++) {
        scanf("%d",&arr[i]);
    }
    qsort(arr,n,sizeof(int),compare);
    m = mean(n,arr);
    printf("%0.1f\n",m);
    printf("%0.1f\n",median(n,arr));
    printf("%d\n",mode(n,arr));
    printf("%0.1f\n",standard_deviation(n,arr,m));
    return 0;
}

