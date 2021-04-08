#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,c=0;
    cin>>t;
    cin.ignore();
    while(t--){
        string n;
        cin>>n;
        int i,j,flag=1;
        for(i=0, j=n.size()-1;i<n.size()/2;i++,j--){
            if(n[i]!=n[j]){
                flag = 0;
                break;
            }
        }
        if(flag==0) cout<<"Case "<<++c<<": No"<<endl;
        else cout<<"Case "<<++c<<": Yes"<<endl;
    }
    return 0;
}
