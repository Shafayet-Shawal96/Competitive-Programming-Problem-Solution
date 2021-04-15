#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin>>n){
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int check[3001]={0};
        for(int i=0;i<n-1;i++)
            check[abs(arr[i]-arr[i+1])]++;
        bool flag = 1;
        for(int i=1;i<n;i++)
            if(!check[i])
                flag =0;
        if(flag == 1) cout<<"Jolly"<<endl;
        else cout<<"Not jolly"<<endl;
    }
    return 0;
}
