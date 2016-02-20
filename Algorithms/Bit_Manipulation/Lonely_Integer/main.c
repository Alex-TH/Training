#include <stdio.h>

int lonelyinteger(int a_size, int* a) {
    for(int i = 0;i < a_size;i++) {
        int n = 0;
        for(int j = 0;j < a_size;j++){
            if(a[j] == a[i]) n++;
        }
        if(n % 2 == 1) return a[i];
    }
    return -1;
}
int main() {
    int res;
    
    int _a_size, _a_i;
    scanf("%d", &_a_size);
    int _a[_a_size];
    for(_a_i = 0; _a_i < _a_size; _a_i++) { 
        int _a_item;
        scanf("%d", &_a_item);
        
        _a[_a_i] = _a_item;
    }
    
    res = lonelyinteger(_a_size, _a);
    printf("%d", res);
    
    return 0;
}

