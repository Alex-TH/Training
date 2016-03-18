#include <stdio.h>

int main() {

    int n;
    int i = 0;
    int negatives = 0;
    int positives = 0;
    int zeroes = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        int value;
        scanf("%d", &value);
        if(value > 0) positives++;
        else if(value < 0) negatives++;
        else zeroes++;
    }
    printf("%.3f\n", (float)positives/n);
    printf("%.3f\n", (float)negatives/n);
    printf("%.3f\n", (float)zeroes/n);
    return 0;
}

