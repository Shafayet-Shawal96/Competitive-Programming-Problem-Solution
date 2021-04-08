#include <stdio.h>

using namespace std;

int main()
{
    int t,a,b,c,k=1,temp;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&a,&b,&c);
        if(a>b&&a>c){
            temp=c;
            c=a;
            a=temp;
        }
        else if(b>a&&b>c){
            temp=c;
            c=b;
            b=temp;
        }
        if((a*a+b*b)==c*c)
            printf("Case %d: yes\n",k);
        else
            printf("Case %d: no\n",k);
        k++;
    }
    return 0;
}

///First, we need to check which num is the biggest among a,b,c
///Pythagoras Rule
