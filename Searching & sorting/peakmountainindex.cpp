#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;

 int peakIndexInMountainArray(vector<int>& arr) {
    int n=arr.size();
    int l=1;
    int h=n-2;
    int a;
    while(l<=h){
        int m=l+(h-l)/2;
        if(arr[m]>arr[m+1] && arr[m]>arr[m-1]) return m;
        else if(arr[m]>arr[m+1]) h=m-1;
        else l=m+1;
        
    }
    return a;
}
int main(){
    vector<int> v={1,4,8,3,5,9,2,6,7};
    int a=peakIndexInMountainArray(v);
    cout<<a;
}