#include <iostream>

using namespace std;

int main()
{
    string str;
    cin>>str;
    if(str[0]==str[1] && str[0] == str[2]) cout<<"Yes"<<endl;
    else if(str[3]==str[1] && str[3] == str[2]) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
