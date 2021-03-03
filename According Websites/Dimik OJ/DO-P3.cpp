#include <iostream>

using namespace std;

int main()
{
    int i,j;
    for(i=1000,j=1;i>0;i--,j++){
        cout<<i<<"\t";
        if(j==5){
            cout<<endl;
            j=0;
        }
    }
    return 0;
}
