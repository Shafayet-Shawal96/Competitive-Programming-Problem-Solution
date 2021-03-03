#include <bits/stdc++.h>

using namespace std;

#define pi acos(-1)

int main()
{
    int t,c=1;
    cin>>t;
    while(t--){
        double r1,r2,h,p;
        cin>>r1>>r2>>h>>p;
        double v,r_mid=(r1-r2)/h*p+r2;
        v=pi/3*p*(r_mid*r_mid+r2*r2+r_mid*r2);
        printf("Case %d: %.7lf\n",c,v);
        c++;
    }
    return 0;
}
