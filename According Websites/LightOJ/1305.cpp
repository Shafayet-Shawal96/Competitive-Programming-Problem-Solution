#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,c=1;
    cin>>t;
    while(t--){
        int ax,ay,bx,by,cx,cy,dx,dy,area;
        cin>>ax>>ay>>bx>>by>>cx>>cy;
        dx=cx-(bx-ax);
        dy=ay+(cy-by);
        area=(((ax*by)+(bx*cy)+(cx*dy)+(dx*ay))-((ay*bx)+(by*cx)+(cy*dx)+(dy*ax)))/2;
        cout<<"Case "<<c<<": "<<dx<<" "<<dy<<" "<<abs(area)<<endl;
        c++;
    }
    return 0;
}
