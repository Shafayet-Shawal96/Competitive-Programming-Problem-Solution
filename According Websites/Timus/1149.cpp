#include <bits/stdc++.h>

using namespace std;

string sinArray(int n){
    string str;
    string temp="sin(1";
    str.append(temp);
    for(int i=2;i<=n;i++){
        if(i%2==0){
            temp="-sin(";
            ostringstream strg;
            strg<<i;
            temp.append(strg.str());
            str.append(temp);
        }
        else{
            temp="+sin(";
            ostringstream strg;
            strg<<i;
            temp.append(strg.str());
            str.append(temp);
        }
    }
    for(int i=0;i<n;i++) str.push_back(')');
    return str;
}

int main()
{
    int n;
    cin>>n;
    string str;
    for(int i=0;i<n-1;i++) str.push_back('(');
    for(int i=1,j=n;i<=n;i++,j--){
        str.append(sinArray(i));
        str.push_back('+');
        ostringstream strg;
        strg<<j;
        str.append(strg.str());
        str.push_back(')');
    }
    str.pop_back();
    cout<<str<<endl;
    str.clear();
    return 0;
}
