#include <stdio.h>

int main()
{
    int number1, number2;
    int t, n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        if(n<=10){
            number1 = n;
            number2 = 0;
        }
        else{
            number1 = 10;
            number2 = n - 10;
        }
        printf("%d %d\n",number1, number2);
    }
    return 0;
}
