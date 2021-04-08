#include <bits/stdc++.h>

using namespace std;
int main()
{
    int tc,cn,ox,oy,ax,ay,bx,by;
    double O,A,B,arc,ang;
    scanf("%d",&tc);
    for(cn=1;cn<=tc;cn++)
    {
        scanf("%d %d %d %d %d %d",&ox,&oy,&ax,&ay,&bx,&by);
        O = sqrt(((bx-ax)*(bx-ax)) + ((by-ay)*(by-ay)));
        B = sqrt(((ox-bx)*(ox-bx)) + ((oy-by)*(oy-by)));
        A = sqrt(((ox-ax)*(ox-ax)) + ((oy-ay)*(oy-ay)));
        ang = acos(((A*A)+(B*B)-(O*O)) / (2.0*A*B));  //Cosine Law
        arc = A * ang;  //s=r*angle
        printf("Case %d: %.7lf\n",cn,arc);

    }
    return 0;
}
