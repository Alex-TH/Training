#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 10000

int abs(int number) {
    return number < 0 ? -number : number; 
}

int is_funny(char* string) {
    int length = strlen(string);
    for(int i = 1;i < length;i++) {
        int diff_s = abs(string[i] - string[i - 1]);
        int diff_r = abs(string[length - i] - string[length - i -1]);
        if(diff_s != diff_r) {
            return 0;
        }
    }
    return 1;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int T;
    char string[MAX_LENGTH + 1];
    scanf("%d",&T);
    while(T-- > 0) {
        scanf("%s", string);
        if(is_funny(string)) {
            printf("Funny\n");
        }
        else {
            printf("Not Funny\n");
        }
    }
    return 0;
}

