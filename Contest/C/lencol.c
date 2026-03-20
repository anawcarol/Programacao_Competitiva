#include <stdio.h>

int main() {
    int A1, B1, A2, B2, A, B;
    scanf("%d %d %d %d %d %d", &A1, &B1, &A2, &B2, &A, &B);

    int possible = 0;

    
    if ((A1 + A2 >= A && B1 >= B && B2 >= B) || (B1 + B2 >= B && A1 >= A && A2 >= A)) {
        possible = 1;
    }
    if ((A1 + B2 >= A && B1 >= B && A2 >= B) || (B1 + A2 >= B && A1 >= A && B2 >= A)) {
        possible = 1;
    }
    if ((B1 + A2 >= A && A1 >= B && B2 >= B) || (A1 + B2 >= B && B1 >= A && A2 >= A)) {
        possible = 1;
    }
    if ((B1 + B2 >= A && A1 >= B && A2 >= B) || (A1 + A2 >= B && B1 >= A && B2 >= A)) {
        possible = 1;
    }

    if (possible) {
        printf("S\n");
    } else {
        printf("N\n");
    }
    return 0;
}