// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

long long GCD(long long a, long long b){
    if(a%b==0) return b;
    return GCD(b,a%b);
}

class Solution{
public:
    long long getSmallestDivNum(long long n){
        long long ans = 1;
        for(int i=2;i<=n;i++){
            ans=ans*i/GCD(ans,i);
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<< ob.getSmallestDivNum(n)<<endl;
    }
    return 0;
}  // } Driver Code Ends
