#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    vector<int> v(n);
	    for(int i=0;i<n;i++) cin>>v[i];
	    for(int i=0;i<n;i++) cout<<v[(i+k)%n]<<" ";
	    cout<<"\n";
	    
	}
	return 0;
}


#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
	if(b==0) return a;
	if(a<b) return gcd(b,a);
	return gcd(b,a%b);
}
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    
    for(int i=0;i<n;i++) cin>>arr[i];
    int d = gcd(n,k);
	for(int i=0;i<d;i++){

		int temp=arr[i];

		int j=i;

		for(;j+k<n;j+=k) swap(arr[j],arr[j+k]);

		swap(temp,arr[j]);
	}

     
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

   
}
