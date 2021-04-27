//https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1

// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends

int minn(int a, int b){
    if(a>b) return b;
    return a;
}
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    int trappingWater(int arr[], int n){
        int arlm[n];
        int arrm[n];
        int maxl =0;
        int maxr =0;
        for(int i=0,j=n-1;i<n;i++,j--){
            if(arr[i]>maxl) maxl=arr[i];
            arlm[i]=maxl;
            if(arr[j]>maxr) maxr=arr[j];
            arrm[j]=maxr;
        }
        int ans = 0;
        for(int i=1;i<n-1;i++){
            ans+=minn(arlm[i],arrm[i])-arr[i];
        }
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends
