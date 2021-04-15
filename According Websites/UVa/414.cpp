#include <bits/stdc++.h>
//9:28
using namespace std;

int main()
{
    int n;
    while(cin>>n){
        if(n==0) break;
        cin.ignore();
        int arr[n]={0};
        for(int i=0;i<n;i++){
            string str;
            getline(cin,str);
            for(int j=0;j<25;j++) if(str[j]==' ') arr[i]++;
        }
        int k=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]<k) k=arr[i];
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=(arr[i]-k);
        }
        cout<<ans<<endl;
    }
    return 0;
}
