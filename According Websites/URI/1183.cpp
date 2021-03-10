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
    for(int j=1;j<12;j++){
        for(int i=0;i<j;i++) sum+=ar[i][j];
    }
    if(O=='S'){
        printf("%.1f\n",sum);
    }
    else{
        printf("%.1f\n",sum/66);
    }
    return 0;
}
