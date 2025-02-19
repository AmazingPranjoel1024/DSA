#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;

int pt(int arr[],int n, int s){
    if(s==0) return 1;
    if(n==0) return 0;
    if(arr[n-1]>s) return pt(arr,n-1,s);
    return pt(arr,n-1,s) || pt(arr,n-1,s-arr[n-1]);
}


int main(){
    int arr[]={1,5,11,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    
    if(sum%2!=0){
        return false;
    }
    else{
        int ans=pt(arr,n,sum/2);
        cout<<ans;
    }
    
}