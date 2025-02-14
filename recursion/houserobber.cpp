#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;

int rob(int arr[],int n,int idx){
    if(idx>=n) return 0;
    int x=arr[idx]+rob(arr,n,idx+2);
    int y=0+rob(arr,n,idx+1);
    int mx=max(x,y);
    return mx;
}


int main(){
    int arr[]={2,7,9,3,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=rob(arr,n,0);
    cout<<ans;
}