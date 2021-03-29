#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%400==0 || (n%100!=0 && n%4==0)) cout<<"It is a leap year."<<endl;
        else{
            int x=1;
            while(true){
                if((n+x)%400==0 || ((n+x)%100!=0 && (n+x)%4==0)){
                    cout<<"Not a leap year. Suggested: "<<n+x<<endl;
                    break;
                } 
                x++;
            }
        }
    }
    return 0;
}
