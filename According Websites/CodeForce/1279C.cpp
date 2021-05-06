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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int ar1[n],ar2[m],ar3[n+1];
        scanArray(ar1,n);
        scanArray(ar2,m);
        for(int i=0;i<n;i++){
            ar3[ar1[i]]=i;
        }
        int lst=-1;
        long long ans=m;
        for(int i=0;i<m;i++){
            if(ar3[ar2[i]]>lst){
                ans+=(ar3[ar2[i]]-i)*2;
                lst=ar3[ar2[i]];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
