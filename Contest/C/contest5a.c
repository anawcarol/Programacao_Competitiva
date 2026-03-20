#include <stdio.h>
#include <stdlib.h> 

int main(){

    long long N;
    scanf("%lld", &N);

    if(N <= 2147483647 && N >= -2147483648){
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;           
}