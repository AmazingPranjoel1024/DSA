#include<iostream>
#include<vector>
#include<vector>
#include<algorithm>
using namespace std;


// vector<int> merge(vector<int> & arr1,vector<int> & arr2){
//     int n=arr1.size();
//     int m=arr2.size();
//     vector<int> res(m+n);
//     int i=0;
//     int j=0;
//     int k=0;
//     while(i<=n-1 && j<=m-1){
//         if(arr1[i]<arr2[j]){
//             res[k]=arr1[i];
//             i++;
//         }
//         else {
//             res[k]=arr2[j];
//             j++;
//         }
//         k++;
//     }
//     if(i==n){
//         while(j<=m-1){
//             res[k]=arr2[j];
//             k++;
//             j++;
//         }
//     }
//     if(j==m){
//         while(i<=n-1){
//             res[k]=arr1[i];
//             k++;
//             i++;
//         }
//     }
//     return res;
// }
// void display(vector<int> &v){
//     int n=v.size();
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     vector<int> arr1;
//     arr1.push_back(1);
//     arr1.push_back(4);
//     arr1.push_back(5);
//     arr1.push_back(8);
//     // arr1.push_back(9);
//     // arr1.push_back(2);
//     display(arr1);

//     vector<int> arr2;
//     arr2.push_back(2);
//     arr2.push_back(3);
//     arr2.push_back(6);
//     arr2.push_back(7);
//     arr2.push_back(10);
//     arr2.push_back(12);
//     // arr2.push_back(11);
//     // arr2.push_back(14);
//     display(arr2);
//     vector<int> a = merge(arr1,arr2);
//     for(int i=0;i<a.size();i++){
//         cout<<a[i]<<" ";
//     }
// }



vector<int> merge(vector<int> & arr1,int n,vector<int> & arr2,int m){
    
    int i=n-1;
    int j=m-1;
    int k=m+n-1;
    vector<int> v(m+n);
    while(i>=0 && j>=0){
        if(arr1[i]>arr2[j]){
            v[k]=arr1[i];
            i--;
            k--;
        }
        else {
            v[k]=arr2[j];
            j--;
            k--;
        }
    }
    if(j<0){
        while(i>=0){
            v[k]=arr1[i];
            i--;
            k--;
        }
    }
    if(i<0){
         while(j>=0){
            v[k]=arr2[j];
            j--;
            k--;
        }
    }
    return v;
}

void display(vector<int> &v){
    int n=v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> arr1;
    arr1.push_back(1);
    arr1.push_back(4);
    arr1.push_back(5);
    arr1.push_back(8);
    // arr1.push_back(9);
    // arr1.push_back(2);
    int n=arr1.size();
    display(arr1);

    vector<int> arr2;
    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(6);
    arr2.push_back(7);
    arr2.push_back(10);
    arr2.push_back(12);
    // arr2.push_back(11);
    // arr2.push_back(14);
    int m=arr2.size();
    display(arr2);
    vector<int> a = merge(arr1,n,arr2,m);
    // for(int i=0;i<a.size();i++){
    //     cout<<a[i]<<" ";
    // }
    display(a);
}

