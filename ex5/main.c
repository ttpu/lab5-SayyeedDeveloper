// ex5
#include <stdio.h>

int main() {
    char lowerCase, upperCase;
    
    printf("Lowercase ASCII, Uppercase ASCII\n");
    for (int i = 0; i < 26; i++){
        lowerCase = 'a' + i;
        upperCase = 'A' + i;
        
        printf(" '%c' %d  '%c' %d \n", lowerCase, (int)lowerCase, upperCase, (int)upperCase);
    }
}
