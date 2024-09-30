#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;




void print(int arr[],int n,int idx,vector<int> v){
    if(idx==n){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    print(arr,n,idx+1,v);
    v.push_back(arr[idx]);
    print(arr,n,idx+1,v);
}

int main(){
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    print(arr,n,0,v);
}