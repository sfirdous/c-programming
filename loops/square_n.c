#include <stdio.h>

int main() {

    int n;
    printf("Enter n ");
    scanf("%d",&n);
    for(int i = 1; i <= n;++i)
    {
        printf("%d^2 = %d\n",i,i*i);
    }

    return 0;
}