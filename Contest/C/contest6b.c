#include <stdio.h>

int main()
{
    int N, x = 0, y = 0, o = 0, n = 0, s = 0, l = 1;
    scanf("%d", &N);

    char P[N];

    scanf("%s", P); 
    

    for (int i = 0; i < N; i++) 
    {
        if (P[i] == 'R' && l == 1){
            l = 0;
            s = 1;
        }
        if (P[i] == 'R' && s == 1){
            s = 0;
            o = 1;
        }
        if (P[i] == 'R' && o == 1){
            n = 1;
            o = 0;
        }
        if (P[i] == 'R' && n == 1){
            l = 1;
            n = 0;
        }
        if (P[i] == 'S' && l == 1){
            x++;
        }
        if (P[i] == 'S' && s == 1){
            y--;
        }
        if (P[i] == 'S' && o == 1){
            x--;
        }
        if (P[i] == 'S' && n == 1){
            y++;
        }
    }

    printf("%d %d\n", x, y);
}