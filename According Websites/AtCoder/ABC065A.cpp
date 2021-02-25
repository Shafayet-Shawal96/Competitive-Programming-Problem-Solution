#include <iostream>

using namespace std;

int main()
{
    long long X,A,B;
    cin>>X>>A>>B;
    if(X+A-B<0)cout<<"dangerous"<<endl;
    else if(B<=A) cout<<"delicious"<<endl;
    else cout<<"safe"<<endl;
    return 0;
}
