#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string a,b;
        cin>>a>>b;
        int al = a.size();
        int bl = b.size();
        int ans=0,k,l,r;
        for(int i=0;i<al;i++){
            for(int j=0;j<bl;j++){
                k=0;
                l=i;
                r=j;
                while(b[r]==a[l] && r<bl && l<al) l++,r++,k++;
                if(ans<k) ans=k;
            }
        }
        cout<<al-ans+bl-ans<<endl;
    }
    return 0;
}
