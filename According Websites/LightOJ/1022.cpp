#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t,c=1;
    float r, ans,areaC,areaS;
    double pi = 2*acos(0.0);
    scanf("%d",&t);
    while(t--){
        scanf("%f",r);
        areaS = 4*r*r;
        areaC = pi*r*r;
        ans = areaS-areaC;
        printf("%.2f",ans);
    }
    return 0;
}
