#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

// int main(){
//     vector<int> v(5);
//     for(int i=0;i<5;i++){
//         cin>>v[i];
//     }
//     sort(v.begin(),v.end());
//     for(int i=0;i<5;i++){
//         cout<<v[i]<<" ";
//     }
// }


int main(){
    int arr[]={3,6,5,1,2,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

