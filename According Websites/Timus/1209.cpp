#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define mx 10000000000
#define mod 10000007

map<ll, bool>mp;
map<ll, bool>::iterator it;


int main()
{
    ll n,m,i=0,t,j=0,ck=0,a=0,b=0;
    j=3;
    mp[1] = true;
    mp[2] = true;
    for(i = 4; i<mx; i+=(j++)) mp[i] = true;

    sc1(t);
    while(t--){
        sc1(n);
        if(mp[n]==true)
            cout<<"1 ";
        else
            cout<<"0 ";
    }

}
