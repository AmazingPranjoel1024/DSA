#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;


int bnsrc( vector<int>&nums,int n,int target ){
     int l = 0;
        int h = nums.size()-1;
        while(l<=h){
            int m = (h+l)/2;
            if(nums[m]==target) return m;
            else if(nums[m]>target) h=m-1;
            else l=m+1;
        }
        return -1;
}




int main(){
    vector<int> v={1,2,3,5,78,45,8,0,3,6};

    int n=v.size();
    int x=78;
    int c=bnsrc(v,n,x);
    cout<<"element fount at index "<<c;
}








