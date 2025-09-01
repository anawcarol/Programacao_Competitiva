#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);

    while(T--){ //expressao booleana, enquanto T diferente de zero é verdadeira e irá continuar fazendo o loop, a cada loop o T decrementado
        int x, y;
        scanf("%d %d", &x, &y);

        printf("%d\n", x+y);
    }

    return 0;
}