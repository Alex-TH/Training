#include <stdio.h>
#include <string.h>
#define MAXLENGTH 1000
#define LETTERS 26

int get_index(char letter) {
    int index = letter >= 'A' && letter <= 'Z' ? (letter - 'A') : -1;
    index = letter >= 'a' && letter <= 'z' ? (letter - 'a') : index;
    return index;
}

int is_pangram(char* string){
    int length = strlen(string);
    int alphabet[LETTERS] = {0};
    for(int i = 0;i < length;i++) {
        int index = get_index(string[i]);
        if(index >= 0) {
            alphabet[index] = 1;
        }
    }
    for(int i = 0;i < LETTERS;i++) {
        if(alphabet[i] == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char string[MAXLENGTH];
    fgets(string, MAXLENGTH, stdin);
    if(is_pangram(string)) {
        printf("pangram");
    }
    else {
        printf("not pangram");
    }   
    return 0;
}

