#include <bits/stdc++.h>

using namespace std;

int check_position(long long r, long long c){
    if((r%2==0 && c%2==0) || (r%2==1 && c%2==1)) return 0;
    else return 1;
}

int main()
{
    int t,c=1;
    cin>>t;
    while(t--){
        long long c1,c2,r1,r2;
        cin>>r1>>c1>>r2>>c2;
        if(check_position(r1,c1)==check_position(r2,c2)){
            if(abs(r1-r2)==abs(c1-c2)) cout<<"Case "<<c<<": 1"<<endl;
            else cout<<"Case "<<c<<": 2"<<endl;
        }
        else{
            cout<<"Case "<<c<<": impossible"<<endl;
        }
        c++;
    }
    return 0;
}
