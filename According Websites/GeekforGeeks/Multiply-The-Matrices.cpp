// Link - https://practice.geeksforgeeks.org/problems/multiply-the-matrices-1587115620/1/?track=dsa-workshop-1-matrix&batchId=308
// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends


class Solution
{   
    public:
    //Function to multiply two matrices.
    vector<vector<int> > multiplyMatrix( const vector<vector<int> >& A, const vector<vector<int> >& B)
    {
        int n1=A.size();
        int m1=A[0].size();
        int n2=B.size();
        int m2=B[0].size();
        if(m1==n2){
            vector<vector<int>> C(n1, vector<int> (m2, 0));
            for(int i=0;i<n1;i++){
                for(int j=0;j<m2;j++){
                    for(int k=0;k<m1;k++){
                        C[i][j]+=A[i][k]*B[k][j];
                    }
                }
            }
            return C;
        }
        else{
            vector<vector<int>> C;
            return C;
        }
    }
};


// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > A(row); 
        for(int i=0; i<row; i++)
        {
            A[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>A[i][j];
            }
        }
        cin>> row>> col;
        vector<vector<int> > B(row);
        for(int i=0; i<row; i++)
        {
            B[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>B[i][j];
            }
        }
        Solution ob;
        vector<vector<int> > result = ob.multiplyMatrix(A,B);

        if(result.size() == 0)
            cout<<"-1";
        else
        {
            for (int i = 0; i < result.size(); ++i)
            {
                for (int j = 0; j < result[0].size(); ++j)
                {
                    cout<<result[i][j]<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends