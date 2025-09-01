#include <stdio.h>

int main(){
    int A, B;
    float C;

    scanf("%d %d", &A, &B);

    if (A > 1000 || B > 1000 || A < 0 || B < 0) {
        return 1;
    }

    if (A == 0 || B == 0) {
        C = 0;
    } else {
        C = (B * (float)A) / 100;
    }
    
    printf("%.2f\n", C);
    return 0;

}