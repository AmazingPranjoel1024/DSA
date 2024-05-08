#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;


// int main(){
//     int m;
//     cout<<"Enter rows & cols: ";
//     cin>>m;
//     int arr[m][m];
//     cout<<"Enter elemnets of matrix: "<<endl;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<m;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<endl;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<m;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     for(int j=0;j<m;j++){
//         if(j%2==0) {
//             for(int i=m-1;i>=0;i--){
//                 cout<<arr[i][j]<<" ";
//             }  
//         }
//         else {
//             for(int i=0;i<m;i++){
//                 cout<<arr[i][j]<<" ";
//             } 
//         }
//     }
// }




int main(){
    int m;
    cout<<"Enter rows & cols : ";
    cin>>m;
    int arr[m][m];
    cout<<"Enter matrix elements: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int j=0;j<m;j++){
        if(j%2==0){
            for(int i=0;i<m;i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{ 
            for(int i=m-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
    }

}














