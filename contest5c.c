#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int polindromo(char *a){
    int i,x;
    for(i = 0,x = strlen(a) - 1; i < x; ++i, --x){
        if(a[i] != a[x]){
            return 0;
        }
    }
    return 1;
}

int main(){
    int count = 0;
    char S[100]; 

    for (int i = 0; i < 100; i++) {
        char c;
        scanf("%c", &c);
        if (c == '\n') break; 
        S[count] = c;
        count++;
        count++;
    }
    
    S[count] = '\0'; 

    if(polindromo(S)){
        puts("yes");
    } else {
        puts("No");
    }

    for (int i = 0; i < 100; i++)
    {
        
    }
    

    return 0;


}