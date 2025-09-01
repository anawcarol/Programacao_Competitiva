#include <stdio.h>

void removeElement(int *list, int *length, int index) {
    if (index >= 0 && index < *length) {
        for (int i = index; i < *length - 1; i++) {
            list[i] = list[i + 1];
        }
        (*length)--;
    }
}

void removerDuplicatas(int *list, int *length) {
    for (int i = 0; i < *length; i++) {
        for (int j = i + 1; j < *length; j++) {
            if (list[i] == list[j]) {
                removeElement(list, length, j);
                j--; // Ajustar o índice após remoção
            }
        }
    }
}

int main(){
    int N, X;

    scanf("%d %d", &N, &X);

    int A[N];

    for (int i = 0; i < N; i++)
    {
       scanf("%d", &A[i]);
    }

    removerDuplicatas(A, N);

    int count = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] == X) {
            for (int j = i; j < N; j++) {
                count++;
            }
            break;
        }
    }

    printf("%d\n", count);
    
    return 0;
}