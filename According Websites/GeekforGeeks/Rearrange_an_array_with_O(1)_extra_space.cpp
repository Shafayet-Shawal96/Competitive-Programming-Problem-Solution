//https://practice.geeksforgeeks.org/problems/rearrange-an-array-with-o1-extra-space3142/1/?track=dsa-workshop-1-arrays&batchId=308#https://practice.geeksforgeeks.org/problems/rearrange-an-array-with-o1-extra-space3142/1/?track=dsa-workshop-1-arrays&batchId=308#
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
    

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to rearrange an array so that arr[i] becomes arr[arr[i]]
    //with O(1) extra space.
    void arrange(long long arr[], int n) {
        // Your code here
        for(long long i=0;i<n;i++){
            long long new_el=arr[arr[i]]%n;
            long long old_el=arr[i];
            arr[i]=new_el*n+old_el;
        }
        for(int i=0;i<n;i++){
            arr[i]/=n;
        }
    }
};


// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin>>t;
    while(t--){
        
        int n;
        //size of array
        cin>>n;
        long long A[n];
        
        //adding elements to the array
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        Solution ob;
        //calling arrange() function
        ob.arrange(A, n);
        
        //printing the elements 
        for(int i=0;i<n;i++){
            cout << A[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends