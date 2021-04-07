#include <stdio.h>

int main()
{
    int N,sum;
    scanf("%d",&N);
    if(N>0){
        sum = N*(N+1)/2;
    }
    else{
        sum = N*(N-1)/2*-1+1;
    }
    printf("%d",sum);
    return 0;
}
