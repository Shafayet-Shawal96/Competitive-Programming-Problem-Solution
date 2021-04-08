#include <bits/stdc++.h>

using namespace std;

int space_count(int n){
    int sc=0;
    while(n>0){
        sc++;
        n/=10;
    }
    return sc;
}

int main()
{
    while(true){
        int n,k;
        cin>>n;
        if(n==0) break;
        //string str;
        //string spac=" ";
        //int big = pow(2,(n-1)*2);
        //int sc=spac;
        //for(int i=0;i<space_count;i++) str+=spac;
        int ar[n][n];
        for(int i=0;i<n;i++){
            k=i;
            for(int j=0;j<n;j++){
                ar[i][j]=pow(2,k++);
            }
        }
        int sc1;
        sc1=space_count(ar[n-1][n-1]);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j==0){
                    cout<<setw(sc1)<<ar[i][j];
                    continue;
                }
                cout<<setw(sc1+1)<<ar[i][j];
                //cout<<str<<ar[i][j];
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
