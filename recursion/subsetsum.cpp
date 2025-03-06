#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;


bool ss(int arr[],int n,int s){
    if(s==0) return true;
    if(n==0) return false;
    if(arr[n-1]>s) return ss(arr,n-1,s);
    return ss(arr,n-1,s) || ss(arr,n-1,s-arr[n-1]);
}

int main(){
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool ans=ss(arr,n,4);
    cout<<ans;
}