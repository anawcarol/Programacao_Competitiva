#include <stdio.h>

int main(){
    int S[4], F[4];


    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &S[i]);
        if (S[i] != 1 || S[i] != 0) {
            break;
        }

        if(i == 0){
            F[0] = 0;
        } else if (i >= 1){
            F[i] = S[i-1];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", F[i]);
    }
    
    
}