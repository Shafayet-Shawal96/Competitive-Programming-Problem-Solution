#include <iostream>

using namespace std;

int main()
{
    int n,x,y;
    cin>>n;
    int ar[2*n-1][2*n-1];
    x=0;
    y=2*n-2;
    for(int i=n;i>0;i--){
        for(int j=x;j<=y;j++) ar[x][j]=i; //1st row
        for(int j=x;j<=y;j++) ar[j][x]=i; //1st column
        for(int j=x;j<=y;j++) ar[j][y]=i; //last column
        for(int j=x;j<=y;j++) ar[y][j]=i; //last row
        x++;
        y--;
    }
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++) cout<<ar[i][j]<<" ";
        cout<<endl;
    }
}
