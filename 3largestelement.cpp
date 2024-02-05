#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;


int main(){
    vector<int> v={1,4,8,3,5,9,2,6,7};
    int n=v.size();
    int mx,smx,tmx;
    mx=smx=tmx=v[0];
    for(int i=0;i<n;i++){
        if(v[i]>mx){
            tmx=smx;
            smx=mx;
            mx=v[i];
        }
        else if(v[i]>smx){
            tmx=smx;
            smx=v[i];
        }
        else if(v[i]>tmx){
            tmx=v[i];
        }
    }
    cout<<mx<<endl;
    cout<<smx<<endl;
    cout<<tmx<<endl;

}















