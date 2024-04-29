#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;


int main(){
    int m;
    cout<<"Enter number of rows/columns : ";
    cin>>m;
    cout<<"Enter array elements : "<<endl;
    int a[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;
    cout<<"Original matrix: "<<emdl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            int temp = a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;

        }
    }
    cout<<"Transposed matrixL: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;





}





































