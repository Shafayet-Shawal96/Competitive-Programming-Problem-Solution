#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,ans=0;
    cin>>n;
    vector<int> A(n);
    for(int i=0;i<n;i++) cin>>A[i];
    for(int i=0;i<n;i++){
        if(i==n-1){
            ans++;
            break;
        }
        if(A[i]==0) continue;
        if(A[i]==A[i+1]) continue;
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}
