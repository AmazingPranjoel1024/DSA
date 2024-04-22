#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cout<<"Enter rows & columns of array : ";
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int nsum=0;
    int idx=-1;
    for(int i=0;i<n;i++){
        int sum =0;
        for(int j=0;j<n;j++){
            sum += a[i][j];
            if(sum>nsum){
                nsum= sum;
                idx=i;
            }
        }
        // idx=i;
    }
    cout<<"The greatest row sum is :"<<nsum<<" "<<"and the row number is: "<<idx;
}











