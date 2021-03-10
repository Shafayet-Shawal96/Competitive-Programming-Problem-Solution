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
    for(int i=1;i<6;i++){
        for(int j=0;j<i;j++) sum+=ar[i][j];
    }
    for(int i=10,k=1;i>5;i--,k++){
        for(int j=0;j<k;j++) sum+=ar[i][j];
    }
    if(O=='S'){
        printf("%.1f\n",sum);
    }
    else{
        printf("%.1f\n",sum/30);
    }
    return 0;
}
