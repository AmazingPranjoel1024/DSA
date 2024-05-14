#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int arr[]={1,2,2,3,3,3,3,4,4,5,5,8,8};
    int n=13;
    int x=3;
    int l=0;
    int h=n-1;
    bool flag =false;
    while(l<=h){
        int m=l+(h-l)/2;
        if(arr[m]==x){
            if(arr[m-1]!=x){
                flag=true;
                cout<<m;
                break;
            }
            else{
                h=m-1;
            }
        }
        else if(arr[m]<x)  l=m+1;
        else h=m-1;

    }
    if(flag==false) cout<<-1;
}












