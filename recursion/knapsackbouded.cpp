#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;


int kn(int w,int wt[],int v[],int n){
    if(w==0 || n==0) return 0;
    if(wt[n-1]>w) return kn(w,wt,v,n-1);
    return max(kn(w,wt,v,n-1),(v[n-1]+kn(w-wt[n-1],wt,v,n-1)));
}

int main(){
    int wt[]={5,4,6,3};
    int v[]={10,40,30,50};
    int n=sizeof(wt)/sizeof(wt[0]);
    int w=10;
    cout<<kn(w,wt,v,n);
}