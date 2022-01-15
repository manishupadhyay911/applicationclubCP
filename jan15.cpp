// { Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}// } Driver Code Ends

int binary(int s,int e,int n,int arr[]){
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]<n) s=mid+1;
        else if(arr[mid]>n) e=mid-1;
        else return mid;
    }
    return -1;
}
bool findPair(int arr[], int size, int n){
    //code
    sort(arr,arr+size);
    
    // for(int i=0;i<size-1;i++){
    //     if(binary(i+1,size-1,n+arr[i],arr)!=-1) return 1;
    // }
    
    int i=0, j=i+1;
    while(i<size-1){
        
        if(arr[j]-arr[i]<n) j++;
        else if(arr[j]-arr[i]>n) i++ , j=i+1;
        else return 1;
    }
    
    return 0;
    
    
}
