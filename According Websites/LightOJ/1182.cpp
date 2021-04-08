#include <bits/stdc++.h>
using namespace std;

// function to convert decimal to binary
int decToBinary(long long n)
{
    // array to store binary number
    //int binaryNum[32];
    vector<int> binaryNum;
    int c=0;
    // counter for binary array
    while (n > 0) {

        // storing remainder in binary array
        binaryNum.push_back(n % 2);
        if(n%2==1) c++;
        n = n / 2;
    }
    return c;
}

// Driver program to test above function
int main()
{
    int t,c=1;
    cin>>t;
    long long n;
    while(t--){
        cin>>n;
        int k=decToBinary(n);
        if(k%2==0) cout<<"Case "<<c<<": even"<<endl;
        else cout<<"Case "<<c<<": odd"<<endl;
        c++;
    }

    return 0;
}
