#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;


 int ccu(int arr[],int n,int s){
    if(s==0) return 1;
    if(s<0) return 0;
    if(s>0 && n==0) return 0;
    //if(arr[n-1]>s) return ccu(arr,n-1,s);
    return ccu(arr,n-1,s) + ccu(arr,n,s-arr[n-1]);
}

int main(){
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=ccu(arr,n,4);
    cout<<ans;
}