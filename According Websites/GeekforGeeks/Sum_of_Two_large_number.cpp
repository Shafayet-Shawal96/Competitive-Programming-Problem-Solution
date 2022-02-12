// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
	public:
   	string add(string s1, string s2){
   	    string s3;
   	    int i=s1.size()-1;
   	    int j=s2.size()-1;
   	    int carry=0,sum;
   	    while(true){
   	        if(i>=0 && j>=0){
   	            sum=(s1[i]-'0')+(s2[j]-'0')+carry;
       	        carry = sum/10;
       	        s3+=sum%10+'0';
       	        i--; j--;
   	        }
   	        else if(i>=0){
   	            sum=(s1[i]-'0')+carry;
       	        carry = sum/10;
       	        s3+=sum%10+'0';
       	        i--;
   	        }
   	        else if(j>=0){
   	            sum=(s2[j]-'0')+carry;
       	        carry = sum/10;
       	        s3+=sum%10+'0';
       	        j--;
   	        }
   	        else{
   	            break;
   	        }
   	    }
   	    if(carry!=0) s3+=carry+'0';
   	    string s4;
   	    for(int k=s3.size()-1;k>=0;k--){
   	        s4+=s3[k];
   	    }
   	    return s4;
   	}    
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s1, s2;
		cin >> s1 >> s2;
		Solution ob;
		string ans = ob.add(s1, s2);
		cout << ans <<"\n";
	}  
	return 0;
}  // } Driver Code Ends