#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> arr(n),abb(m);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            abb[arr[i]%m]++;
            
        }
        int a=0,b=0;
        
        for(int i=0;i<m;i++){
            
            if(abb[i]!=0){
                a++;//all
                if(abb[i]==1) b++;//distinct
            }
        }
        cout<<a<<endl<<b<<endl;
    }
    
    return 0;
}

