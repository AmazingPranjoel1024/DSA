#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

int main(){
    int m;
    cout<<"Enter rows & colmuns of matrix: ";
    cin>>m;
    int arr[m][m];
    cout<<"Enter array elements: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i==j || i+j==m-1){
                cout<<arr[i][j];
            }
            else cout<<" ";
        }
        cout<<endl;
    }
}













