#include <stdio.h>

int main(){
    int N;

    scanf("%d", &N);

    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }


    for (int j = 0; j < N; j++)
    {
        for (int k = 0; k < N; k++)
        {
            if(A[j] == N){
                j++;
                N--;
            }
        }
        
    }
        


}