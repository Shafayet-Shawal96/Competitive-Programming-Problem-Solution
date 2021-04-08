#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,c=0;
    cin>>t;
    cin.ignore();
    while(t--){
        int n,P,Q;
        cin>>n>>P>>Q;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int egg_count=0;
        int egg_weight=0;
        while(egg_weight+a[egg_count]<=Q && egg_count<n){
            egg_weight+=a[egg_count];
            egg_count++;
        }
        if(egg_count<P) cout<<"Case "<<++c<<": "<<egg_count<<endl;
        else cout<<"Case "<<++c<<": "<<P<<endl;
    }
    return 0;
}
