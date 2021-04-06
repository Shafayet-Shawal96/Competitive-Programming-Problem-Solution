#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        int hi=0,k=1;
        for(int i=0;i<n;i++) cin>>ar[i];
        sort(ar,ar+n);
        for(int i=0;i<n-1;i++){
            if(ar[i]==ar[i+1]) k++;
            if(ar[i]!=ar[i+1]){
                if(hi<k) hi=k;
                k=1;
            }
        }
        if(hi<k) hi=k;
        if(2*hi>=n) cout<<2*hi-n<<endl;
        else if(2*hi<n && n%2==0) cout<<'0'<<endl;
        else if(2*hi<n && n%2==1) cout<<'1'<<endl;
    }
    return 0;
}
