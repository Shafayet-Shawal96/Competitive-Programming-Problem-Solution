// https://acm.timus.ru/problem.aspx?space=1&num=1293

#include <stdio.h>

int main()
{
    int N, A,B;
    scanf("%d %d %d", &N, &A, &B);
    printf("%d",N*A*B*2);
    return 0;
}

/* one square meter of the panel needs 1 nanogramm of sulphide.
   then each rectengular panel should have A*B nanogram(A and B
   are dimensions) on both side, means total would be A*B*2 nanogram
   for 1 panel. N panel should need N*A*B*2 nanogram of sulphide
   For example N=5, A=2, B=3 will need 5*2*3*2= 60 ng sulphide */
