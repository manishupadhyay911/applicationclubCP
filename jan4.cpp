    #include<bits/stdc++.h>
    using namespace std;
     
    const int mx=1e6;
    int prime[mx+1];
     
    void sieve(){
        for(int i=2;i*i<=mx;i++){
            if(prime[i]==0){
                for(int j=i*i;j<=mx;j+=i) prime[j]=1;
            }
        }
    }
    string solve (int N) {
       // Your code goes here
       if(N>3 && prime[N]) return "Yes";
       else return "No";
    }
     
    int main() {
     
        ios::sync_with_stdio(0);
        cin.tie(0);
        sieve();
        int T;
        cin >> T;
        for(int t_i=0; t_i<T; t_i++)
        {
            int N;
            cin >> N;
     
            string out_;
            out_ = solve(N);
            cout << out_;
            cout << "\n";
        }
    }
