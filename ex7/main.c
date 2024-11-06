#include <stdio.h>

int main() {
    int n;
    int ascending = 1;
    int descending = 1;
    int prev, curr;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    printf("Enter first number: ");
    scanf("%d", &prev);

    for (int i = 1; i < n; i++) {
        printf("Enter next number: ");
        scanf("%d", &curr);
        
        if (curr <= prev)
            ascending = 0;
        if (curr >= prev)
            descending = 0;
            
        prev = curr;
    }
    
    if (ascending)
        printf("ascending sequence\n");
    else if (descending)
        printf("descending sequence\n");
    else
        printf("neither ascending nor descending sequence\n");
    
    return 0;
}