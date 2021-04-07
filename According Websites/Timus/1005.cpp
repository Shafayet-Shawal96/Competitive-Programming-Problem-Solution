#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    vector<int> w(n);
    for(int i=0;i<n;i++){
        cin>>w[i];
        sum+=w[i];
    }
    int ts,tans,ans=sum;
    for(int i=0;i<(1<<n);i++){
        ts=0;
        for(int j=0;j<n;j++){
            if(i&(1<<j)) ts+=w[j];
        }
        tans=min(ans,abs(sum-2*ts));
        if(ans>tans) ans=tans;
    }
    cout<<tans<<endl;

    return 0;
}
