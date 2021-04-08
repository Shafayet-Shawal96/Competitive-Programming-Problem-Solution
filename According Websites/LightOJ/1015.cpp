#include <iostream>

using namespace std;

int main()
{
    int t,n,ans,c=1;
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>n;
        cin.ignore();
        int student;
        ans=0;
        for(int i=0;i<n;i++){
            cin>>student;
            if(student<0)
                continue;
            ans+=student;
        }
        cout<<"Case "<<c<<": "<<ans<<endl;
        c++;
    }
    return 0;
}
