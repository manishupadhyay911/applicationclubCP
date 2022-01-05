#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(b>a) return gcd(b,a);
    if(b==0) return a;
    else return gcd(b,a%b);
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        int g=0;
        for(int i=0;i<n;i++){
            g=gcd(g,v[i]);
        }
        cout<<g<<"\n";
        
    }
    return 0;
}
