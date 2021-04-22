#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

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
        for(int i=0;i<n;i++) cin>>ar[i];
        int flag =-1;
        int arr1[n];
        int arr2[n];
        int notpresent=0;
        vector<int> v(100001,0);
        for(int i=0;i<n;i++){
            if(ar[i]==notpresent){
                for(int j=notpresent+1;j<n+1;j++){
                    if(v[j]==0){
                        notpresent=j;
                        break;
                    }
                }
            }
            arr1[i]=notpresent;
            v[ar[i]]++;
        }
        notpresent=0;
        vector<int> v1(100001,0);
        for(int i=n-1;i>=0;i--){
            if(ar[i]==notpresent){
                for(int j=notpresent+1;j<n+1;j++){
                    if(v1[j]==0){
                        notpresent=j;
                        break;
                    }
                }
            }
            arr2[i]=notpresent;
            v1[ar[i]]++;
        }
        for(int i=0;i<n;i++){
            if(arr1[i]==arr2[i+1]){
                flag=i+1;
                break;
            }
        }
        cout<<flag<<endl;
    }
    return 0;
}
