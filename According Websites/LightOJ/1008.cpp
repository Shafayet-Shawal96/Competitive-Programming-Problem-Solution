#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,ca=1;
    cin>>t;
    cin.ignore();
    long long s,root,sqr,row,col,r;
    while(t--){
        cin>>s;
        root=sqrt(s);
        r=root+1;
        if(root*root==s && s%2==0){
            row=1;
            col=root;
        }
        else if(root*root==s && s%2!=0){
            row=root;
            col=1;
        }
        else if(s==r*r-r+1){
            col=row=root+1;
        }
        else if(root%2==0){
            if(s>r*r-r+1){
                row=r;
                col=r-(s-(r*r-r+1));
            }
            else{
                col=r;
                row=r-(r*r-r+1-s);
            }
        }
        else if(root%2!=0){
            if(s<r*r-r+1){
                row=r;
                col=r-(r*r-r+1-s);
            }
            else{
                col=r;
                row=r-(s-(r*r-r+1));
            }
        }
        cout<<"Case "<<ca<<": "<<col<<" "<<row<<endl;
        ca++;
    }
    return 0;
}
