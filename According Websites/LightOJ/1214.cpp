#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,c=0;
    cin>>t;
    cin.ignore();
    while(t--){
        string a;
        long long b,ans=0;
        cin>>a>>b;
        if(b<0) b*=-1;
        if(a[0]=='-'){
            for(int i=1;i<a.size();i++){
                ans=ans*10+(a[i]-'0');
                ans=ans%b;
            }
            if(ans==0) cout<<"Case "<<++c<<": divisible"<<endl;
            else cout<<"Case "<<++c<<": not divisible"<<endl;
        }
        else{
            for(int i=0;i<a.size();i++){
                ans=ans*10+(a[i]-'0');
                ans=ans%b;
            }
            if(ans==0) cout<<"Case "<<++c<<": divisible"<<endl;
            else cout<<"Case "<<++c<<": not divisible"<<endl;
        }
    }
    return 0;
}
