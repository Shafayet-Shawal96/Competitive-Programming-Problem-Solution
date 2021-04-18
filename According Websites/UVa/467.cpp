#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k,t=1;
    string str;
    while(getline(cin,str)){
        vector<int> arr;
        int i,low=90;
        for(i=0;i<str.size();i++){
            if(str[i]==' ') continue;
            k=(str[i]-'0')*10+(str[i+1]-'0');
            if(k<low) low = k;
            arr.push_back(k*2);
            i++;
        }
        for(i=low+1;i<3601;i++){
            int flag = 0;
            for(int j=0;j<arr.size();j++)
                if(i%arr[j]>=(arr[j]/2-5)){
                    flag=1;
                    break;
                }
            if(flag==0) break;
        }
        if(i!=3601) cout<<"Set "<<t++<<" synchs again at "<<i/60<<
            " minute(s) and "<<i%60<<" second(s) after all turning green."<<endl;
        else cout<<"Set "<<t++<<" is unable to synch after one hour."<<endl;
        //for(int i=0;i<arr.size();i++) cout<<arr[i]<<" ";
        //cout<<endl;
    }
    return 0;
}
