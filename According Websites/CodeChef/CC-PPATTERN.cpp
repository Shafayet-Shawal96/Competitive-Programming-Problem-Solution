#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n][n];
        int k=1;
        int x=0,y=0;
        int a,b;
        for(int i=0;i<n;i++){
            a=x;
            b=y;
            for(int j=0;j<y+1;j++){
                ar[a++][b--]=k;
                k++;
            }
            y++;
        }
        x=1;
        y=n-1;
        for(int i=n-1;i>0;i--){
            a=x;
            b=y;
            for(int j=0;j<i;j++){
                ar[a++][b--]=k;
                k++;
            }
            x++;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) cout<<ar[i][j]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
