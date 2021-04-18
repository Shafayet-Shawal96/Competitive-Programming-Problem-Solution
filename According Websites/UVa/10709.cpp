#include <iostream>

using namespace std;

int main()
{
    int h,w,n;
    while(cin>>w>>h>>n){
        if(w==0 && h==0 && n==0) break;
        int arr[w+1][h+1]={0};
        for(int i=1;i<=w;i++){
            for(int j=1;j<=h;j++)
                arr[i][j]=0;
        }
        while(n--){
            int x1,y1,x2,y2;
            cin>>x1>>y1>>x2>>y2;
            int x_start,x_end,y_start,y_end;
            if(x1>x2){
                x_start=x2;
                x_end=x1;
            }
            else{
                x_start=x1;
                x_end=x2;
            }
            if(y1>y2){
                y_start=y2;
                y_end=y1;
            }
            else{
                y_start=y1;
                y_end=y2;
            }
            for(int i=x_start;i<=x_end;i++){
                for(int j=y_start;j<=y_end;j++)
                    arr[i][j]=1;
            }
        }
        int coumt=0;
        for(int i=1;i<=w;i++){
            for(int j=1;j<=h;j++)
                if(arr[i][j]==0) coumt++;
        }
        if(coumt==0) cout<<"There is no empty spots."<<endl;
        else if(coumt==1) cout<<"There is one empty spot."<<endl;
        else cout<<"There are "<<coumt<<" empty spots."<<endl;
    }
    return 0;
}
