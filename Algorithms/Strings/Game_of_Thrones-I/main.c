#include <stdio.h>
#include <string.h>
#define TOTAL_LETTERS 26

void findPalind(char *arr)
{
     
    int flag = 0;
    int occurrences[TOTAL_LETTERS] = {0};
    int length = strlen(arr);
    // Find the required answer here. Print Yes or No at the end of this function depending on your inspection of the string
    for(int i = 0;i < length;i++) {
        occurrences[arr[i] - 'a']++;
    }
    {
        int total_odds = 0;
        for(int i = 0;i < TOTAL_LETTERS;i++) {
            if(occurrences[i] != 0 && occurrences[i] % 2 == 1) {
                total_odds++;
            }
        }
        flag = total_odds > 1;
    }
    if (flag==0)
        printf("YES\n");
    else
        printf("NO\n");
}
int main() {

    char arr[100001];
    scanf("%s",arr);
    findPalind(arr);
    return 0;
}

