// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++
bool isPrime(int N){
    bool ans =1;
    for(int i=2;i<=sqrt(N);i++){
        if(N%i==0) ans=0;
    }
    return ans;
}
class Solution{
    public:
    int exactly3Divisors(int N)
    {
        int ans=0;
        for(int i=2;i<=sqrt(N);i++){
            if(isPrime(i) && i*i<=N) ans++;
        }
        return ans;
    }
};

// { Driver Code Starts.


int main()
 {
    int T;
    
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        
        //taking N
        cin>>N;
        Solution ob;
        //calling function exactly3Divisors()
        cout<<ob.exactly3Divisors(N)<<endl;
    }
	return 0;
}  // } Driver Code Ends
