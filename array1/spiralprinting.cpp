#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

int main(){
    int m;
    cout<<"Enter the rows of matrix: ";
    cin>>m;
    int n;
    cout<<"Enter number of cols matrix: ";
    cin>>n;
    int arr[m][n];
    cout<<"Input matrix elements: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int minr =0 , minc=0;
    int maxr =m-1, maxc=n-1;
    while(minr<=maxr && minc<=maxc){
        //right
        for(int j=minc;j<=maxc;j++){
            cout<<arr[minr][j]<<" ";
        }
        if(minc>maxc || minr>maxr) break;
        minr++;
        //down
        for(int i=minr;i<=maxr;i++){
            cout<<arr[i][maxc]<<" ";
        }
        if(minc>maxc || minr>maxr) break;
        maxc--;
        //left
        for(int j=maxc;j>=minc;j--){
            cout<<arr[maxr][j]<<" ";
        }
        if(minc>maxc || minr>maxr) break;
        maxr--;
        //down
        for(int i=maxr;i>=minr;i--){
            cout<<arr[i][minc]<<" ";
        }
        if(minc>maxc || minr>maxr) break;
        minc++;
    }

}