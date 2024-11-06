#include <stdio.h>

int main() {
    int x, y, M, m, r;
    
    printf("Enter two numbers:\n");
    scanf("%d %d", &x, &y);
    
    if (x > y) {
        M = x;
        m = y;
    } else {
        M = y;
        m = x;
    }
    
    while (1) {
        r = M % m;
        if (r == 0) {
            break;
        }
        M = m;
        m = r;
    }
    
    printf("GCD is: %d\n", m);
    return 0;
}