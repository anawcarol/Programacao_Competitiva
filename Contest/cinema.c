#include <stdio.h>

int main(){
    int a, b, p1, p2;

    scanf("%d %d", &a, &b);

    if (a <= 17){
        p1 = 15;
    } else if (a >= 18 && a <= 59){
        p1 = 30;
    } else if (a >= 60){
        p1 = 20;
    }   

    if (b <= 17){
        p2 = 15;
    } else if (b >= 18 && b <= 59){
        p2 = 30;
    } else if (b >= 60){
        p2 = 20;
    }

    printf("%d\n", p1 + p2);

}