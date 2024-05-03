#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;


int main(){
    int arr[2][3]= {1,2,3,4,5,6};
    int a[2][3]={7,8,9,10,11,12};
    int res[2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            res[i][j]= arr[i][j]+a[i][j];
        }
    }
    cout<<"On adding two matrices : "<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}














