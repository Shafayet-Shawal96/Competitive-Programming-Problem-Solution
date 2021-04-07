#include <iostream>

using namespace std;

int main()
{
    string str;
    int n,k;               
    getline(cin,str);      
    if(str[1]==' '){       
        n = str[0]-'0';    
        k = str.size()-2;  
    }
    else{
        n = 10;            
        k = str.size()-3;  
    }
    int ans = 1;           
    while(n>0){           
        ans = ans*n;      
        n=n-k;            
    }
    cout<<ans;
    return 0;
}
