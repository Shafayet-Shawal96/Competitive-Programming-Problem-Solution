// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

int Search(vector<int> ,int );

//User code will be pasted here

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        vector<int> vec(n);
        
        for(int i =0;i<n;i++) 
            cin >> vec[i];
        
        int target;
        cin >> target;
        
        cout << Search(vec,target) << "\n";
         
    }
}// } Driver Code Ends


//User function template for C++

// vec : given vector of elements
// K : given value whose index we need to find 
int Search(vector<int> vec, int target) {
    
    int n = vec.size();
    
    int low = 0, high = n-1, ans = -1;
        while(low <= high){
            int mid = (low+high)/2;
            if(target == vec[mid]){
                ans = mid;
                break;
            }

            if(vec[low] <= vec[mid]){
                if(vec[low] <= target && target <= vec[mid]){
                    high = mid-1;
                }
                else{
                    low = mid+1;
                }
            }
            else{
                if(vec[mid] < vec[high]){
                    if(vec[mid] <= target && target <= vec[high]){
                        low = mid+1;
                    }
                    else{
                        high = mid-1;
                    }
                }
            }
        }
        return ans;
}