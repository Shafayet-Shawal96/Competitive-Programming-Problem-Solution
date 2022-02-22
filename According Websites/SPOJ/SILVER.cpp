#include <bits/stdc++.h>

using namespace std;

int main(){
    while(true){
        int n, cut=0;
        cin>>n;
        if(n==0) break;
        while(n>1){
            n/=2;
            cut++;
        }
        cout<<cut<<endl;
    }
    return 0;
}