#include <stdio.h>
#include <stdlib.h>

void matrizTransposta(int H, int N, int M, int A[H][N], int B[N][M]) {
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < N; j++) {
            B[j][i] = A[i][j];
        }
    }

}

int main(){

    int H, M;
    scanf("%d %d", &H, &M);
    int A[H][M];

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    int B[M][H];
    matrizTransposta(H, M, H, A, B);

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < H; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    
}