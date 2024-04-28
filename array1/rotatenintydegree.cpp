#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;



int main(){
    int m;
    cout<<"Enter number of rows and columns : ";
    cin>>m;
    int a[m][m];
    int s=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Original matrix: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<s;i++){
        for(int j=i+1;j<s;j++){
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    cout<<"Transposed matrix: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for(int k=0;k<s;k++){
        int i=0;
        int j=s-1;
        while(i<=j){
            int t=a[k][i];
            a[k][i]=a[k][j];
            a[k][j]=t;
            i++;
            j--;
        }
        
    }
    cout<<"90 degree rotated: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}










