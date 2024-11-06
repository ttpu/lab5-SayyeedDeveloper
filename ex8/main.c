#include <stdio.h>

int main() {
    int n;
    float largest = 0, second_largest = 0, number;
    
    printf("Enter number at least '2': ");
    scanf("%d", &n);
    while (n < 2) {
        printf("Invalid input. Enter n at least '2': ");
        scanf("%d", &n);
    }
    
    printf("Enter number 1: ");
    scanf("%f", &largest);
    
    printf("Enter number 2: ");
    scanf("%f", &second_largest);
    
    if (second_largest > largest) {
        float temp = largest;
        largest = second_largest;
        second_largest = temp;
    }
    
    for (int i = 3; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &number);
        
        if (number > largest) {
            second_largest = largest;
            largest = number;     
        } else if (number > second_largest) {
            second_largest = number;
        }
    }
    
    printf("The two largest numbers are: %.1f and %.1f\n", largest, second_largest);
    
    return 0;
}