#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;


int search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0;
        int h=n-1;
         if(n==2){
            if(target==nums[0]) return 0;
            else if(target==nums[1]) return 1;
            else return -1;
        }
        int pvt=-1;
        while(l<=h){
            int m=l+(h-l)/2;
            if(m==0) l=m+1;
            else if(m==n-1) h=m-1;
            else if(nums[m]<nums[m+1] && nums[m]<nums[m-1]){ // lowest pivot
                pvt=m;
                break;
            }
            else if(nums[m]>nums[m+1] && nums[m]>nums[m-1]){ //largest pivot
                pvt=m+1;
                break;
            }
            else if(nums[m]>nums[h]) l=m+1;
            else h=m-1;
        
        }
        if(pvt==-1){
            int l=0;
            int h=n-1;
            while(l<=h){
                int m=l+(h-l)/2;
                if(nums[m]==target) return m;
                else if(nums[m]>target) h=m-1;
                else l=m+1;
            }
            return -1; 
        }  
        if(target>=nums[0] && target<=nums[pvt-1]){
            int l=0;
            int h=pvt-1;
            while(l<=h){
                int m=l+(h-l)/2;
                if(nums[m]==target) return m;
                else if(nums[m]>target) h=m-1;
                else l=m+1;
            }
        }
        else{ 
            int l=pvt;
            int h=n-1;
            while(l<=h){
                int m=l+(h-l)/2;
                if(nums[m]==target) return m;
                else if(nums[m]>target) h=m-1;
                else l=m+1;
            }
        }
    return -1;
}

int main(){
    int vector<int> v={1,2,2,3,3,3,3,4,4,5,5,8,8};
    int n=sizeof(v)/sizeof(v[0]);
    search(v,n);
}

