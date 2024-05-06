#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

int main(){
    int m;
    cout<<"Enter rows of first matrix: ";
    cin>>m;
    int n;
    cout<<"Enter cols of first matrix: ";
    cin>>n;
    int p;
    cout<<"Enter rows of second matrix: ";
    cin>>p;
    int q;
    cout<<"Enter cols of second matrix: ";
    cin>>q;
    if(n==p){
        
        int a[m][n];
        cout<<"Enter elements of first matrix: "<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        int b[p][q];
        cout<<"Enter elements of second matrix: "<<endl;
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];
            }
        }
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]= 0;
                for(int k=0;k<p;k++){
                    res[i][j] += a[i][k]*b[k][j];
                }
            }
        }
        cout<<"Matrix multiplication result is: "<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else {
        cout<<"Multiplication is not possible";

    }

}















