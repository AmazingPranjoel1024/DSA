#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;


int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int a[3][3]={4,5,8,0,0,8,1,2,0};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr[i][j] += a[i][j];
        }
    }
    cout<<"The sum is: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}










