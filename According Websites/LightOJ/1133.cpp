#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,c=0;
    cin>>t;
    while(t--){
        int n,m,d,k,tmp,y,z;
        char input;
        cin>>n>>m;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        cin.ignore();
        for(int j=0;j<m;j++){
            cin>>input;
            if(input=='S'){
                cin>>d;
                for(int i=0;i<n;i++) a[i]+=d;
            }
            else if(input=='M'){
                cin>>d;
                for(int i=0;i<n;i++) a[i]*=d;
            }
            else if(input=='D'){
                cin>>k;
                for(int i=0;i<n;i++) a[i]/=k;
            }
            else if(input=='R'){
                k=n-1;
                for(int i=0;i<n/2;i++){
                    tmp=a[i];
                    a[i]=a[k];
                    a[k]=tmp;
                    k--;
                }
            }
            else if(input=='P'){
                cin>>y>>z;
                tmp=a[y];
                a[y]=a[z];
                a[z]=tmp;
            }
        }
        cout<<"Case "<<++c<<":"<<endl;
        for(int i=0;i<n-1;i++) cout<<a[i]<<" ";
        cout<<a[n-1]<<endl;
    }
    return 0;
}
