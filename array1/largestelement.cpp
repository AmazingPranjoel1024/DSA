#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;


// int main(){
//     int m;
//     cout<<"Enter number of rows: ";
//     cin>>m;
//     int n;
//     cout<<"Enter number of columns : ";
//     cin>>n;
//     int arr[m][n];
//     // int mx=INT_MIN;
//     cout<<"Enter array elements: "<<endl;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     int mx =arr[0][0];
//     for(int i=0;i<=2;i++){
//         for(int j=0;j<=2;j++){
//             if(arr[i][j]>mx){
//                 mx=arr[i][j];
//             }
//         }
//     }
//     cout<<"Largest element is : "<<mx;
// }


int main(){
    int m;
    cout<<"Enter number of rows: ";
    cin>>m;
    int n;
    cout<<"Enter number of columns: ";
    cin>>n;
    int arr[m][n];
    int mx=INT_MIN;
    cout<<"Enter array elements: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]>mx) mx=arr[i][j];
        }
    }
    cout<<"Largest number is: "<<mx;
}









