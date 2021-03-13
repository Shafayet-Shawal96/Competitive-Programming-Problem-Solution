#include <iostream>

using namespace std;

int main()
{
    int n;
    while(true){
        cin>>n;
        if(n==0) break;
        int ar[n][n];
        int x=1;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                ar[i][j]=x;
                ar[j][i]=x;
                x++;
            }
            x=1;
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
