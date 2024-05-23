#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;


int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m=sizeof(arr)/sizeof(arr[0]);
    cout<<"The number which has majority is: "<<arr[m/2];

}


