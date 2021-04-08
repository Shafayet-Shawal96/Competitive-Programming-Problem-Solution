#include <bits/stdc++.h>

using namespace std;

long long a, b, c, d, e, f;

long long fn( int n ) {
    if(n==0) return a;
    long long ar[n+1];
    ar[0]=a;
    ar[1]=b;
    ar[2]=c;
    ar[3]=d;
    ar[4]=e;
    ar[5]=f;
    for(long long i=6;i<n+1;i++) ar[i]=(ar[i-1]+ar[i-2]+ar[i-3]+ar[i-4]+ar[i-5]+ar[i-6])% 10000007;

    //for(int i=0;i<n+1;i++) cout<<i<<" "<<ar[i]<<endl;
    return ar[n];
}
int main() {
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- ) {
        scanf("%lld %lld %lld %lld %lld %lld %d", &a, &b, &c, &d, &e, &f, &n);
        cout<<"Case "<<++caseno<<": "<<fn(n)%10000007<<endl;
    }
}

// why do we need to find modulus twice?
