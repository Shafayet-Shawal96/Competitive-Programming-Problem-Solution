// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
void reverse(vector<long long>& arr,int l, int r){
    int temp;
    for(int i=l,j=r;i<=(l+r)/2;i++,j--){
        temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}

class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        for(int i=0;i<n;i++){
            if(i+k-1>=n) reverse(arr,i,n-1);
            else reverse(arr,i,i+k-1);
            i=i+k-1;
        }
    }
};

// { Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
}

  // } Driver Code Ends