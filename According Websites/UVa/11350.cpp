#include <bits/stdc++.h>

using namespace std;

int giveInt(string str, int l, int r){
    int ans=0;
    for(int i=r,j=1;i>=l;i--,j*=10){
        ans+=(str[i]-'0')*j;
    }
    return ans;
}

int main()
{
    int t,c=1;
    cin>>t;
    cin.ignore();
    while(t--){
        string str;
        getline(cin,str);
        int flag=0;
        int n=giveInt(str,4,str.size()-1);
        long long arr[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
                if(arr[i][j]<0) flag=1;
            }
        }
        cin.ignore();
        for(int i=0,j=n-1;i<n;i++,j--){
            if(flag==0){
                for(int l=0,r=n-1;l<n;l++,r--){
                    if(arr[i][l]!=arr[j][r]){
                        flag=1;
                        break;
                    }
                }
            }
        }
        if(flag==0) cout<<"Test #"<<c++<<": Symmetric."<<endl;
        else cout<<"Test #"<<c++<<": Non-symmetric."<<endl;
    }
    return 0;
}
