#include <bits/stdc++.h>

using namespace std;

long long ans(long long x){
    if(x%3==0 || x%3==1) return x/3*2;
    else return x/3*2+1;
}

int main()
{
    long long t,a,b,sum,c=1;
    cin>>t;
    while(t--){
        cin>>a>>b;
        cout<<"Case "<<c<<": "<<ans(b)-ans(a-1)<<endl;
        c++;
    }
    return 0;
}
