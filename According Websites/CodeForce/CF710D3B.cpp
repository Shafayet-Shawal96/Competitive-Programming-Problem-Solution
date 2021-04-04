#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        int k,n,l,r,ans=2;
        string str;
        cin>>n>>k>>str;
        for(int i=0;i<n;i++){
            if(str[i]=='*'){
                l=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(str[i]=='*'){
                r=i;
                break;
            }
        }
        if(l==r) cout<<'1'<<endl;
        else if(r-l<=k) cout<<'2'<<endl;
        else{
            while(true){
                for(int i=l+k;i>l;i--){
                    if(str[i]=='*'){
                        l=i;
                        break;
                    }
                }
                if(r-l<=k){
                    cout<<ans+1<<endl;
                    break;
                }
                ans++;
            }
        }
    }
    return 0;
}
