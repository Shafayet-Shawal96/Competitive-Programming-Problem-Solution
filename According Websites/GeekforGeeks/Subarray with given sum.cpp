// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, int s)
    {
        vector<int> ans;
        int current_sum=0;
        bool flag=0;
        for(int i=0,j=0;i<n;i++){
            current_sum+=arr[i];
            if(current_sum>s){
                while(current_sum>s) current_sum-=arr[j++];
            }
            if(current_sum==s){
                ans.push_back(j+1);
                ans.push_back(i+1);
                flag=1;
                break;
            }
        }
        if(flag==0) ans.push_back(-1);
        return ans;
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends