#include <iostream>

using namespace std;

int main()
{
    int k,s=0;
    cin>>k;
    int a[k];
    a[0]=1;
    a[1]=1;
    for(int i=2;i<k;i++){
        a[i]=a[i-1]+a[i-2];
    }
    for(int i=0;i<k;i++) s=s+a[i];
    cout<<s<<endl;
    return 0;
}
