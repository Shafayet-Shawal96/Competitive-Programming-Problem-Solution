#include <iostream>

using namespace std;

int main()
{
    int n;
    while(true){
        cin>>n;
        if(n==0) break;
        int ar[n][n];
        for(int i=1,l=0;i<=n;i++,l++){
            for(int r=l;r<=n-i;r++){
                ar[l][r]=i;
                ar[n-i][r]=i;
            }
            for(int c=l;c<=n-i;c++){
                ar[c][l]=i;
                ar[c][n-i]=i;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j==0) printf("%3d",ar[i][j]);
                else printf(" %3d",ar[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
