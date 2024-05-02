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
//     cout<<"enter number of columns: ";
//     cin>>n;
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for (int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<endl;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     for(int j=0;j<n;j++){
//         for(int i=0;i<m;i++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     int tp[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             tp[i][j]=arr[j][i];
//         }
//     }
//     cout<<"after storing: "<<endl;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<tp[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


int main(){
    int m;
    cout<<"Enter number of rows: ";
    cin>>m;
    int n;
    cout<<"Enter number of columns: ";
    cin>>n;
    int a[m][n];
    cout<<"Enter array elements: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<a[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }

    int t[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            t[i][j]=a[j][i];
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }

}












