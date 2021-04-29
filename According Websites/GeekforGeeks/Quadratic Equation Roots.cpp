// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        vector<int> ans;
        if(b*b-4*a*c<0) ans.push_back(-1);
        else{
            double x,y;
            x = (-b+sqrt(b*b-4*a*c))/(2*a*1.0);
            y = (-b-sqrt(b*b-4*a*c))/(2*a*1.0);
            if(x<0) x=floor(x);
            if(y<0) y=floor(y);
            if(x>y){
                ans.push_back(x);
                ans.push_back(y);
            }
            else{
                ans.push_back(y);
                ans.push_back(x);
            }
            
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;
        Solution ob;
        vector<int> roots = ob.quadraticRoots(a, b, c);
        if (roots.size() == 1 && roots[0] == -1)
            cout << "Imaginary";
        else
            for (int i = 0; i < roots.size(); i++) cout << roots[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
