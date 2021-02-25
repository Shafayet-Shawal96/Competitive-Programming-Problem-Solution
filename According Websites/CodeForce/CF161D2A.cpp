#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,y;
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                x=i+1;
                y=j+1;
            }
        }
    }
    cout<<abs(x-3)+abs(y-3)<<endl;
    return 0;
}
