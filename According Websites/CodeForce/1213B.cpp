#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        int mini=ar[n-1];
        int ans=0;
        for(int i=n-2;i>=0;i--){
            if(ar[i]>mini) ans++;
            else mini = ar[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}
