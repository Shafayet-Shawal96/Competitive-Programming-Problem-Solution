#include <iostream>

using namespace std;

int main()
{
    int t,m,n,ans,c=1;
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>m>>n;
        if(m==1)
            ans=n;
        else if(n==1)
            ans=m;
        else if(m==2){
            if(n%2==1)
                ans=n+1;
            else if(n%4==0)
                ans=n;
            else if(n%4==2)
                ans=n+2;
        }
        else if(n==2){
            if(m%2==1)
                ans=m+1;
            else if(m%4==0)
                ans=m;
            else if(m%4==2)
                ans=m+2;
        }
        else if((m*n)%2==0)
            ans=m*n/2;
        else
            ans=m*n/2+1;
        cout<<"Case "<<c<<": "<<ans<<endl;
        c++;
    }
    return 0;
}
