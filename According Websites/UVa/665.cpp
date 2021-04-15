#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string str;
        getline(cin,str);
        int n,k;
        cin>>n>>k;
        int arr[k][100];
        char sign[k];
        for(int i=0;i<k;i++){
            cin>>arr[i][0];
            for(int j=1;j<=arr[i][0]*2;j++){
                cin>>arr[i][j];
            }
            cin>>sign[i];
        }
        int ans[n+1]={0};
        for(int i=1;i<=n;i++){
            for(int j=0;j<k;j++){
                if(sign[j]=='='){
                    int flag = 1;
                    for(int l=1;l<=arr[j][0]*2;l++){
                        if(i==arr[j][l]){
                            flag = 0;
                            break;
                        }
                    }
                    if(flag==0){
                        ans[i]=1;
                        break;
                    }
                }
                else{
                    int flag = 1;
                    for(int l=1;l<=arr[j][0]*2;l++){
                        if(i==arr[j][l]){
                            flag = 0;
                            break;
                        }
                    }
                    if(flag==1){
                        ans[i]=1;
                        break;
                    }
                }
            }
        }
        int check=0;
        int checknumber=0;
        for(int i=1;i<=n;i++){
            if(ans[i]==0){
                check++;
                checknumber=i;
            }
        }
        if(check==1) cout<<checknumber<<endl;
        else cout<<0<<endl;
        if(t) puts("");
    }
    return 0;
}
