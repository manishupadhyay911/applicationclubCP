// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    
    public:
    int transfigure (string A, string B)
    {
    	if(A.size()!=B.size()) return -1;
    	int aa[256]={0};
    	for(int i=0;i<A.size();i++){
    	    aa[A[i]]++;
    	    aa[B[i]]--;
    	}
    	for(int i=0;i<256;i++){
    	    if(aa[i]!=0) return -1;
    	}
    	int i=A.size()-1,j=A.size()-1;
    	int count=0;
    	while(i>=0 and j>=0){
    	    
    	    while(i>=0 and A[i]!=B[j]){
    	        i--;
    	        count++;
    	    }
    	    if(A[i]==B[j]){
    	        i--;
    	        j--;
    	    }
    	    
    	    
    	}
    	return count;
    }
};

// { Driver Code Starts.


int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution obj;
        cout << obj.transfigure (A, B) << endl;
    }
}  // } Driver Code Ends
