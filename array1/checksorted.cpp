#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int v[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    bool flag=true;
    for(int i=0;i<n;i++){
        if(v[i]>v[i+1]){
            flag =false;
            break;
        }
    }
    if(flag==true) cout<<"array is sorted";
    else cout<<"array is not sorted";

}