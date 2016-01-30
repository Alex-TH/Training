#include <stdio.h>
#include <stdlib.h>
#define FIVES 3
#define THREES 5
#define FIVE '5'
#define THREE '3'

int put_chars(char ch, int index, int qty, char* output) {
    int until = qty + index;
    for(int i = index;i < until;i++) {
        output[i] = ch;
    }
    return until;
}

int decent_number(int n, char* output) {
    int index = 0;
    int fives = n/FIVES * FIVES;
    int threes = n - fives;
    while(fives > 0 && threes % THREES != 0) {
        fives -= FIVES;
        threes += FIVES;
    }
    output[n] = 0;
    index = put_chars(FIVE, index, fives, output);
    index = put_chars(THREE, index, threes, output);
    return threes % THREES == 0;
}

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n;
        char *output;
        scanf("%d", &n);
        output = (char *) malloc((n + 1) * sizeof(char));
        if(decent_number(n, output)) {
            printf("%s\n", output);    
        }
        else {
            printf("-1\n");
        }
    }
    return 0;
}

