#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,c=1;
    cin>>t;
    while(t--){
        double v1,v2,v3,a1,a2,disByT1,disByT2,time;
        cin>>v1>>v2>>v3>>a1>>a2;
        disByT1=v1*v1/(2*a1);
        disByT2=v2*v2/(2*a2);
        if(v1/a1>v2/a2) time=v1/a1;
        else time=v2/a2;
        printf("Case %d: %.7lf %.7lf\n",c,disByT1+disByT2,time*v3);
        c++;
    }
    return 0;
}
