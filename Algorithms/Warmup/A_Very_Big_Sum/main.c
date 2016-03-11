#include <stdio.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int length;
    int i = 0;
    long long int suma = 0;
    scanf("%d",&length);
    while(i < length){
        long long num;
        scanf("%lld", &num);
        suma += num;
        i++;
    }
    printf("%lld", suma);
    return 0;
}

