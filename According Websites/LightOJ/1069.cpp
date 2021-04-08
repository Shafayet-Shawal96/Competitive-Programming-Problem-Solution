#include <iostream>

using namespace std;

int main()
{
    int t,a,b,ans,c=1;
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>a>>b;
        if(a>b)
            cout<<"Case "<<c<<": "<<19+(a+(a-b))*4<<endl;
        else
            cout<<"Case "<<c<<": "<<19+(a+(b-a))*4<<endl;
        c++;
    }
    return 0;
}
