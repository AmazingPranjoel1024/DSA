#include<iostream>
using namespace std;
#include<climits>
// int main(){
//     int arr[7] = {45,86,32,11,56,98,10};
//     for(int i=0;i<=6;i++){
//         if(arr[i]<35) cout<<i<<" ";
//     }
//     return 0;
// }


// int main(){
//     int arr[] = {45,86,32,11,56,98,10,2,5,6,9,7,1,5,4,6,4};
//     int size= sizeof(arr)/sizeof(arr[0]);
//     cout<<size;
// }

// int main(){
//     int n;
//     cout<<"Enter the lenght of array: ";
//     cin>>n;
//     int arr[n];
//     int sum=0;
//     for(int i=0;i<=n-1;i++){
//         cin>>arr[i];
//     }

//     for(int i=0;i<=n-1;i++){
//         sum =sum+arr[i];

//     }
//     cout<<"The sum is: "<<sum;
// }

// int main(){
//     int n;
//     cout<<"Enter lenght: ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<=n-1;i++){
//         cin>>arr[i];
//     }
//     int x;
//     cout<<"Enter the element to be searched: ";
//     cin>>x;
//     bool flag= false;
//     for(int i=0;i<=n-1;i++){
//         if(arr[i]==x) flag = true; 
//     }
//     if(flag==true) cout<<"Element is present";
//     else cout<<"Not present";
// }

// int main(){
//     int n;
//     cout<<"Enter the lenght: ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<=n-1;i++){
//         cin>>arr[i];
//     }
//     // int max=arr[0];
//      int max=INT_MIN;
//     for(int i=0;i<=n-1;i++){
//         if(arr[i]>max) max=arr[i];
//     }
//     cout<<max;
// }

int main(){
    int n;
    cout<<"Enter the lenght: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int max=INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(arr[i]>max) max=arr[i];
    }
    cout<<max<<endl;
    int smax=INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(arr[i] != max && smax<arr[i]) smax=arr[i];

    }
    cout<<smax;
}

