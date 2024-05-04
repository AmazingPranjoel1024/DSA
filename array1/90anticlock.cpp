#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;


int main(){
    int m;
    cout<<"Enter rows: ";
    cin>>m;
    int n;
    cout<<"Enter cols: ";
    cin>>n;
    int arr[m][n];
    int s=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter matrix elements : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    cout<<"Original matrix: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<m;i++){
        for(int j=i+1;j<n;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    cout<<" tranposed matrix: "<<endl;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int k=0;k<s;k++){
        int i=0;
        int j=s-1;
        int t=arr[i][k];
        arr[i][k]=arr[j][k];
        arr[j][k]=t;
    }
    cout<<" 90 degree anticlockwise matrix: "<<endl;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    
}










