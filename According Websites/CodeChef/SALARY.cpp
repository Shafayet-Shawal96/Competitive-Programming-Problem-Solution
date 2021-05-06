#include<bits/stdc++.h>
using namespace std;
/// Typedef
typedef long long ll;
void scanArray(int ar[], int n){
    for(int i=0;i<n;i++) cin>>ar[i];
}
void printArray(int ar[], int n){
    for(int i=0;i<n;i++) cout<<ar[i]<<" ";
    cout<<endl;
}

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        scanArray(ar,n);
        sort(ar,ar+n);
        int ans=0;
        for(int i=n-1,j=1;i>0;i--,j++){
            ans+ = j*(ar[i]-ar[i-1]);
        }
        cout<<ans<<endl;
    }
    return 0;
}
