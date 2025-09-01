#include <stdio.h>

int main(){
    int D, A, N, total;

    scanf("%d %d %d", &D, &A, &N);

    if(N = 1){
        total = 31 * D;
    } 

    if(N > 2){
        total = (31 - (N-1)) * (D * (N-1) * A);
    } else if(N >= 16){
        total = ((31 - (N-1)) * (D * (N-1) * A)) + (D * A);
    }

    printf("%d\n", total);
}