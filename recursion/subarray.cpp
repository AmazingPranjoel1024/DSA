#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;

void subset(int arr[],int n,int idx,vector<int> v){
    if(idx==n){
        for(int i=0;i<v.size();i++){
            cout<<v[i];
        }
        cout<<endl;
        return;
    }
    subset(arr,n,idx+1,v);
    if(v.size()==0 || arr[idx-1]==v[v.size()-1] ){ //if vector is empty then push
       v.push_back(arr[idx]);
        subset(arr,n,idx+1,v); 
    }
//     else if(arr[idx-1]==v[v.size()-1]){
//         v.push_back(arr[idx]);
//         subset(arr,n,idx+1,v);
//     }
}

int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    subset(arr,n,0,v);
}