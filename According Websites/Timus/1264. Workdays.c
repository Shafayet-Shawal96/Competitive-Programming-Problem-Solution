// https://acm.timus.ru/problem.aspx?space=1&num=1264

#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    printf("%d",N*(M+1));
    return 0;
}


/* Array size is N means there can be N number of digits
   And 0 to M means there can be M+1 different digits
   So for example N=3 and M=1 means -
   in position/index 0 there can be 2numbers(0 and 1 because M=1)
   same as in position/index 1
   same as in position/index 2
   so 3 positions and each can have 2 number so the ans is 3*2=6*/
