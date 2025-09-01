#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a < b && b < c) {
        // encaixe tipo matrioska
        printf("1\n");
    } else if ((a + b) < c) {
        // duas menores juntas dentro da maior
        printf("2\n");
    } else if (a < b || b < c) {
        // algum encaixe parcial
        printf("2\n");
    } else {
        // nenhuma se encaixa
        printf("3\n");
    }

    return 0;
}
