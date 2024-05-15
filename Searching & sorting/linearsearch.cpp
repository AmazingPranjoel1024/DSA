#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int arr[]={1,2,3,5,4,7,9,6};
    int n;
    cout<<"enter element: ";
    cin>>n;
    bool flag = false;
    int m=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<m;i++){
        if(n==arr[i]){b
            flag = true;
            break;
        }
    }
    if(flag==false) cout<<"Element not found ";
    else cout<<"Element found";
}





