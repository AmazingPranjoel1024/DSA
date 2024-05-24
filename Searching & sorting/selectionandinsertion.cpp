#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;

//////////////////////////////////////////////Selection sort//////////////////////////////////////////////////////////////////////////

// int main(){
//     int arr[]={4,2,6,1,3,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     for(int i=0;i<n-1;i++){
//         int min=INT_MAX;
//         int mindx=-1;
//         for(int j=i;j<n;j++){
//             if(arr[j]<min){
//                 min=arr[j];
//                 mindx = j;
//             }
//         }
//         swap(arr[i],arr[mindx]);
//     }
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

int main(){
    int arr[]={4,6,2,1,5,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Unsorted array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        int mindx=-1;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                mindx=j;
            }
        }
        swap(arr[i],arr[mindx]);
    }
    cout<<"sorted array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}





//////////////////////////////////////////////insertion sort///////////////////////////////////////////////////////


int main(){
    int arr[]={4,6,2,1,5,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Unsorted array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1){
            if(arr[j]>arr[j-1]) break;
            else swap(arr[j],arr[j-1]);
            j--;
        }
    }
     cout<<"sorted array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}














