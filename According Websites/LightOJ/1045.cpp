#include <bits/stdc++.h>

using namespace std;

double logValue[1000001];

void findLogValue(){
    logValue[0]=0;
    for(int i=1;i<1000001;i++) logValue[i]=logValue[i-1]+log10(i);
}

int main()
{
    int t,c=0;
    cin>>t;
    findLogValue();
    while(t--){
        int n,b;
        cin>>n>>b;
        int ans = logValue[n]/log10(b)+1;
        cout<<"Case "<<++c<<": "<<ans<<endl;
    }
    return 0;
}
