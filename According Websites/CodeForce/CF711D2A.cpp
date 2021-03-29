#include <iostream>

using namespace std;

int gcd(long long int a, long long int b){
    if(a%b==0) return b;
    return gcd(b,a%b);
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n;
        while(true){
            int x=0;
            k=n;
            while(k!=0){
                x+=k%10;
                k/=10;
            }
            long long int l =gcd(n,x);
            if(l!=1){
                cout<<n<<endl;
                break;
            }
            n++;
        }
    }

    return 0;
}
