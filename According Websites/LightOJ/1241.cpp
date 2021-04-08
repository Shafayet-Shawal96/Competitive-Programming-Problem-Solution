#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,c=0;
    cin>>t;
    while(t--){
        int n,ans=0;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        ans+=ceil((v[0]-2)/5.0);
        for(int i=0;i<n-1;i++){
        //    if(v[i]<v[i+1]) {
                ans+=ceil((v[i+1]-v[i])/5.0);
         //   }
        }
        cout<<"Case "<<++c<<": "<<ans<<endl;
    }
    return 0;
}
