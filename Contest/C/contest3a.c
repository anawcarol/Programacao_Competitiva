#include <stdio.h>

int main(){
    float S, T, X;

    scanf("%f %f %f", &S, &T, &X);

    if(S < T){
        if((X + 0.5) >= S && (X + 0.5) < T){
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    } else {
        if((X + 0.5) >= S || (X + 0.5) < T){
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}