#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(vector<int> & v){
    int n=v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


void rev(int i,int j,vector<int> & v){
    while(i<=j){
        int temp =v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
}

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    display(v);
    int n=v.size();
    int k=2;
    if(k>n) k=k%n;
    rev(0,n-k-1,v);
    // 5 4 3 2 1 6 7
    rev(n-k,n-1,v);
    // 5 4 3 2 1 7 6
    rev(0,n-1,v);
    // 6 7 1 2 3 4 5
    display(v);
}
























