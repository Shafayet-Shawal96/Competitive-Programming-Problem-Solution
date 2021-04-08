#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,c=0;
    cin>>t;
    cin.ignore();
    while(t--){
        vector <string> backStack;
        vector <string> forwardStack;
        string input;
        cout<<"Case "<<++c<<":"<<endl;
        backStack.push_back("http://www.lightoj.com/");
        while(getline(cin,input)){
            if(input[0]=='V'){
                backStack.push_back(input.substr(6,input.size()-1));
                cout<<backStack[backStack.size()-1]<<endl;
                forwardStack.clear();
            }
            else if(input[0]=='B'){
                if(backStack.size()==1) {
                    cout<<"Ignored"<<endl;
                    continue;
                }
                forwardStack.push_back(backStack[backStack.size()-1]);
                backStack.pop_back();
                cout<<backStack[backStack.size()-1]<<endl;
            }
            else if(input[0]=='F'){
                if(forwardStack.size()==0){
                    cout<<"Ignored"<<endl;
                    continue;
                }
                backStack.push_back(forwardStack[forwardStack.size()-1]);
                cout<<forwardStack[forwardStack.size()-1]<<endl;
                forwardStack.pop_back();
            }
            else{
                backStack.clear();
                forwardStack.clear();
                break;
            }
        }
    }
    return 0;
}
