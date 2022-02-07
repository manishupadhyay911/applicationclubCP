            

// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        int* ans=new int[2];
        for(int i=0;i<n;i++){
            
            while(arr[i]!=i+1 and arr[i]!=arr[arr[i]-1]){
                swap(arr[arr[i]-1],arr[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]!=i+1){
                ans[1]=i+1;
                ans[0]=arr[i];
                break;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends
