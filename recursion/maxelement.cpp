#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;

// void printmax(int arr[],int n,int idx,int max){
//     if(idx==n){
//         cout<<max;
//         return;
//     }
//     if(max<arr[idx]) max=arr[idx];
//     return printmax(arr,n,idx+1,max);
// }
// int maxInarray(int arr[],int n,int idx){
//     if(idx==n) return INT_MIN;
//     return max(arr[idx],maxInarray(arr,n,idx+1));
// }

// int main(){
//     int arr[]={2,7,9,4,6,35,1,5,0};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     //printmax(arr,n,0,INT_MIN);
//     cout<<maxInarray(arr,n,0);
// }

void printmax(int arr[],int n, int idx,int max){
    if(idx==n){
        cout<<max;
        return;
    }
    if(max<arr[idx]) max=arr[idx];
    printmax(arr,n,idx+1,max);
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    printmax(arr,n,0,INT_MIN);
}