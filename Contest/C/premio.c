#include <stdio.h>

int main(){
    int P, D, B;

    scanf("%d %d %d", &P, &D, &B); 

    int soma = P + (2 * D) + (3 * B);

    if (soma >= 150) {
        printf("B\n");
    } else if (soma >= 120) {
        printf("D\n");
    } else if (soma >= 100) {
        printf("P\n");
    } else {
        printf("N\n");
    }

    
}