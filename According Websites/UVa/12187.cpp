#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,r,c,k;
    while(cin>>n>>r>>c>>k){
        if(n==0 || r==0 || c==0 || k==0) break;
        int arr1[r+2][c+2];
        int arr2[r+2][c+2];
        ///initilization
        for(int i=0;i<r+2;i++){
            for(int j=0;j<c+2;j++){
                arr1[i][j] = -1;
                arr2[i][j] = -1;
            }
        }
        ///input
        for(int i=1;i<=r;i++){
            for(int j=1;j<=c;j++) cin>>arr1[i][j];
        }
        ///attack
        while(k--){
            for(int i=1;i<=r;i++){
                for(int j=1;j<=c;j++){
                    if(arr1[i][j]==0){
                        if(arr1[i][j+1]==n-1 || arr1[i][j-1]==n-1 || arr1[i+1][j]==n-1 || arr1[i-1][j]==n-1)
                            arr2[i][j]=n-1;
                        else arr2[i][j]=arr1[i][j];
                    }
                    else{
                        if(arr1[i][j]-1==arr1[i][j+1] || arr1[i][j]-1==arr1[i][j-1] || arr1[i][j]-1==arr1[i+1][j] || arr1[i][j]-1==arr1[i-1][j])
                            arr2[i][j]=arr1[i][j]-1;
                        else arr2[i][j]=arr1[i][j];
                    }
                }
            }
            for(int i=0;i<r+2;i++){
                for(int j=0;j<c+2;j++){
                    arr1[i][j] = arr2[i][j];
                }
            }
        }
        for(int i=1;i<=r;i++){
            for(int j=1;j<=c;j++){
                cout<<arr1[i][j];
                if(j!=c) cout<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
