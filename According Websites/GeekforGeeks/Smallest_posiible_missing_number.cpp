//https://practice.geeksforgeeks.org/problems/smallest-positive-missing-number3051/1/?track=dsa-workshop-1-arrays&batchId=308
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    // Function to find missing integer in array
    // arr: input array
    // n: size of array
    int findMissing(int arr[], int n) { 
        
        int newarr[n+2]={0};
        for(int i=0;i<n;i++){
            if(arr[i]<0 || arr[i]>n+1) continue;
            newarr[arr[i]]=1;
        }
        for(int i=1;i<n+2;i++){
            if(newarr[i]==0) return i;
        }
    }
};

// { Driver Code Starts.

int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        cout<<ob.findMissing(arr, n)<<endl;
    }
    return 0; 
}   // } Driver Code Ends