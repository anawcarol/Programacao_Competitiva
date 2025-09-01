#include <stdio.h>

int main (){
    int N;
    scanf("%d", &N);

    char S[N];
    for (int i = 1; i <= N; i++)
    {
        scanf(" %c", &S[i]);
    }

    printf("%c\n", S[N]);
    
}