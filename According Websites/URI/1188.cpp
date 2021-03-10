#include <bits/stdc++.h>

using namespace std;

int main()
{
    char O;
    cin>>O;
    float ar[12][12];
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++) cin>>ar[i][j];
    }
    float sum=0;
    for(int j=1;j<6;j++){
        for(int i=11;i>11-j;i--) sum+=ar[i][j];
    }
    for(int j=10,k=1;j>5;j--,k++){
        for(int i=11;i>11-k;i--) sum+=ar[i][j];
    }
    if(O=='S'){
        printf("%.1f\n",sum);
    }
    else{
        printf("%.1f\n",sum/30);
    }
    return 0;
}
