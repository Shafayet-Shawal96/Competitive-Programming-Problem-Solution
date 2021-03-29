#include <iostream>

using namespace std;

int main()
{
    int a,b,n=0;
    cin>>a>>b;
    while(true){
        if(a>b){
            cout<<n<<endl;
            break;
        }
        n++;
        a = a*3;
        b = b*2;
    }
    return 0;
}
