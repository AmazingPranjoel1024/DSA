#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v={1,5,67,-3,5,-2};
    int n=sizeof(v)/4;
    int mx=INT_MIN;
    int smx=INT_MIN;
    for(int i=0;i<n;i++){
        if(mx<v[i]){
            smx=mx;
            mx=v[i];
        }
    }
    cout<<mx<<endl;
    cout<<smx<<endl;
}












