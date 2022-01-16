#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int flag=0;
        if(n%21==0){
            cout<<"The streak is broken!\n";
        }
        else{
            while(n>0){
                int d=n%100;
                if(d==21){
                    flag=1;
                    break;
                }
                n/=10;
            }
            if(flag) cout<<"The streak is broken!\n";
            else cout<<"The streak lives still in our heart!\n";
        }
    }
}
