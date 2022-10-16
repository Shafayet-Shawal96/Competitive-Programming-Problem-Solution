// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    void sort012(int a[], int n)
    {
        int zero = 0;
        int one = 0;
        int two = n - 1, temp;
        while (one <= two)
        {
            switch (a[one])
            {
            case 0:
                swap(a[zero++], a[one++]);
                break;
            case 1:
                one++;
                break;
            case 2:
                swap(a[two--], a[one]);
            }
        }
    }
    // void sort012(int a[], int n)
    // {
    //     int no_1 = 0;
    //     int no_2 = 0;
    //     int no_0 = 0;
    //     for(int i=0;i<n;i++){
    //         if( a[i] == 0){
    //             no_0 +=1;
    //         }
    //         if( a[i] == 1){
    //             no_1 +=1;
    //         }
    //         if( a[i] == 2){
    //             no_2 +=1;
    //         }
    //     }
    //     int count = 0;
    //     for(int i=0;i<no_0;i++){
    //         a[count++]=0;
    //     }
    //     for(int i=0;i<no_1;i++){
    //         a[count++]=1;
    //     }
    //     for(int i=0;i<no_2;i++){
    //         a[count++]=2;
    //     }
    // }
};

// { Driver Code Starts.
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << endl;
    }
    return 0;
}

// } Driver Code Ends