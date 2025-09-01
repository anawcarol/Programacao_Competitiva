#include <stdio.h>

int main(){
    int E, D;
    int resultado;

    scanf("%d %d", &E, &D);
    
    if (E > D) {
        resultado = E + D;
    } else {
        resultado = 2 * (D - E); 
    }
        

    printf("%d\n", resultado);
    return 0;
}