// https://acm.timus.ru/problem.aspx?space=1&num=1409

#include <stdio.h>

int main()
{
    int A,B;
    scanf("%d %d", &A, &B);
    printf("%d %d", B-1, A-1);
    return 0;
}

/* For this we have to consider the example Harry shot
   4 cans and Larry shot 7 cans.
   We heve to remember that at the end they both shot
   the same can. so if we remove the 1 shot from both of them
   that means Harry shot (4-1)=3 cans(Or we can say Larry did not
   shot 3 cans) and Larry shot (7-1)=6 cans (Or we can say Harry
   did not shot 6 can) */
