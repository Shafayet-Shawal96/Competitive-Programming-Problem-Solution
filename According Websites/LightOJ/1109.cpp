#include <bits/stdc++.h>

using namespace std;

bool cmp(pair <int, int> a, pair<int, int> b){
    if(a.first < b.first) return 1;
    if(a.first > b.first) return 0;
    if(a.second > b.second) return 1;
    return 0;
}

int main()
{
    vector <pair<int, int> > a(1001);
    for(int i=1;i<1001;i++){
        a[i].second=i;
        for(int j=i;j<1001;j+=i){
            a[j].first++;
        }
    }
    sort(a.begin(),a.end(),cmp);
    //for(int i=0;i<1001;i++) cout<<a[i].first<<" "<<a[i].second<<endl;
    int t,c=0;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<"Case "<<++c<<": "<<a[n].second<<endl;
    }
    return 0;
}
