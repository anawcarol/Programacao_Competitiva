#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int p = (n*2) - 1;

    int a[p];

    for (int i = 3; i <= p/2; i++)
    {
        a[1] = 1;
        a[2] = 2;
        if (i % 2 != 0)
        {
            a[i] = 1;
        } else if (){
            a[i] = a[i-2] + 1;
        }
        
    }
    
}