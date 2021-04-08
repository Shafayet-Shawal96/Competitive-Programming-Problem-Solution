#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,c=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int maax_x=0;
        int miin_x=1001;
        int maax_y=0;
        int miin_y=1001;
        int maax_z=0;
        int miin_z=1001;
        while(n--){
            int x1,y1,z1,x2,y2,z2;
            cin>>x1>>y1>>z1>>x2>>y2>>z2;
            if(x1>maax_x) maax_x=x1;
            if(x2<miin_x) miin_x=x2;
            if(y1>maax_y) maax_y=y1;
            if(y2<miin_y) miin_y=y2;
            if(z1>maax_z) maax_z=z1;
            if(z2<miin_z) miin_z=z2;

        }
        if(miin_x>maax_x && miin_y>maax_y && miin_z>maax_z){
            cout<<"Case "<<c<<": "<<(miin_x-maax_x)*(miin_y-maax_y)*abs(miin_z-maax_z)<<endl;
        }
        else cout<<"Case "<<c<<": 0"<<endl;
        c++;
    }
    return 0;
}
