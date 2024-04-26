#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;


int main(){
    int n;
    cout<<"Enter on odd row and column: ";
    cin>>n;
    if(n%2==0) cout<<"Enter valid number";
    else {
        int arr[n][n];
    
    cout<<"Input array elements "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Original array "<<endl;
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<endl;
    for(int i=0;i<n;i++){
        int mid=n/2;
        for(int j=0;j<n;j++){
            if(i==mid || j==mid){
                cout<<arr[i][j]<<" ";
            }
            else cout<<"  ";
            
        }
        cout<<endl;
    }

    }
    
}










